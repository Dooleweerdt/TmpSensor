
# Makefile for custom MicroPython nrf board.

################################################################################
# Define your settings here.

# The board name.
BOARD ?= NRF52840

# Location of MicroPython repository.
MICROPY_TOP ?= $(abspath ../../micropython)

################################################################################
# Define your targets here.

all: firmware uf2

################################################################################
# Items below this line do not generally need to be changed.

BOARD_DIR = $(abspath .)
BUILD = $(abspath build)

include $(MICROPY_TOP)/py/mkenv.mk
include $(MICROPY_TOP)/py/mkrules.mk

mpy:
	$(Q)$(MAKE) -C ../../micropython/mpy-cross	

port_submodules:
	$(Q)$(MAKE) -C $(MICROPY_TOP)/ports/nrf submodules

firmware:
	$(Q)$(MAKE) -C $(MICROPY_TOP)/ports/nrf \
		PROJECT_TOP=$(abspath ../..) \
		BOARD=$(BOARD) \
		BOARD_DIR=$(BOARD_DIR) \
		BUILD=$(BUILD)

### Create a .uf2 file from the .hex file
uf2: $(BUILD)/firmware.uf2

$(BUILD)/firmware.uf2: $(BUILD)/firmware.hex
	$(ECHO) "Create $@"
	$(PYTHON) $(MICROPY_TOP)/tools/uf2conv.py -f 0xADA52840 -c -o "$(BUILD)/firmware.uf2" $^

deploy:
	$(PYTHON) $(MICROPY_TOP)/tools/pydfu.py -u $(BUILD)/firmware.dfu
