include("$(PORT_DIR)/modules/manifest.py")
require("ds18x20")
require("ssd1306")
#require("aioble") - Not working on nRF
#require("neopixel") - Requires mod_bitstream port for nRF
freeze("./modules")
freeze("$(BOARD_DIR)/../../src/utils", "showlogo.py")
