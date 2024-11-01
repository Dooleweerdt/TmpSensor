include micropython/py/mkenv.mk

# Include NRF52840 Board configs
BOARD = NRF52840/mpconfigboard.mk

include micropython/ports/nrf/Makefile

include micropython/py/mkrules.mk
