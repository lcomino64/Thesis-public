SDRAM
=====

Register Listing for SDRAM
--------------------------

+--------------------------------------------------------------------+--------------------------------------------------+
| Register                                                           | Address                                          |
+====================================================================+==================================================+
| :ref:`SDRAM_DFII_CONTROL <SDRAM_DFII_CONTROL>`                     | :ref:`0xf0002800 <SDRAM_DFII_CONTROL>`           |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI0_COMMAND <SDRAM_DFII_PI0_COMMAND>`             | :ref:`0xf0002804 <SDRAM_DFII_PI0_COMMAND>`       |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI0_COMMAND_ISSUE <SDRAM_DFII_PI0_COMMAND_ISSUE>` | :ref:`0xf0002808 <SDRAM_DFII_PI0_COMMAND_ISSUE>` |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI0_ADDRESS <SDRAM_DFII_PI0_ADDRESS>`             | :ref:`0xf000280c <SDRAM_DFII_PI0_ADDRESS>`       |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI0_BADDRESS <SDRAM_DFII_PI0_BADDRESS>`           | :ref:`0xf0002810 <SDRAM_DFII_PI0_BADDRESS>`      |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI0_WRDATA <SDRAM_DFII_PI0_WRDATA>`               | :ref:`0xf0002814 <SDRAM_DFII_PI0_WRDATA>`        |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI0_RDDATA <SDRAM_DFII_PI0_RDDATA>`               | :ref:`0xf0002818 <SDRAM_DFII_PI0_RDDATA>`        |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI1_COMMAND <SDRAM_DFII_PI1_COMMAND>`             | :ref:`0xf000281c <SDRAM_DFII_PI1_COMMAND>`       |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI1_COMMAND_ISSUE <SDRAM_DFII_PI1_COMMAND_ISSUE>` | :ref:`0xf0002820 <SDRAM_DFII_PI1_COMMAND_ISSUE>` |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI1_ADDRESS <SDRAM_DFII_PI1_ADDRESS>`             | :ref:`0xf0002824 <SDRAM_DFII_PI1_ADDRESS>`       |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI1_BADDRESS <SDRAM_DFII_PI1_BADDRESS>`           | :ref:`0xf0002828 <SDRAM_DFII_PI1_BADDRESS>`      |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI1_WRDATA <SDRAM_DFII_PI1_WRDATA>`               | :ref:`0xf000282c <SDRAM_DFII_PI1_WRDATA>`        |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI1_RDDATA <SDRAM_DFII_PI1_RDDATA>`               | :ref:`0xf0002830 <SDRAM_DFII_PI1_RDDATA>`        |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI2_COMMAND <SDRAM_DFII_PI2_COMMAND>`             | :ref:`0xf0002834 <SDRAM_DFII_PI2_COMMAND>`       |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI2_COMMAND_ISSUE <SDRAM_DFII_PI2_COMMAND_ISSUE>` | :ref:`0xf0002838 <SDRAM_DFII_PI2_COMMAND_ISSUE>` |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI2_ADDRESS <SDRAM_DFII_PI2_ADDRESS>`             | :ref:`0xf000283c <SDRAM_DFII_PI2_ADDRESS>`       |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI2_BADDRESS <SDRAM_DFII_PI2_BADDRESS>`           | :ref:`0xf0002840 <SDRAM_DFII_PI2_BADDRESS>`      |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI2_WRDATA <SDRAM_DFII_PI2_WRDATA>`               | :ref:`0xf0002844 <SDRAM_DFII_PI2_WRDATA>`        |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI2_RDDATA <SDRAM_DFII_PI2_RDDATA>`               | :ref:`0xf0002848 <SDRAM_DFII_PI2_RDDATA>`        |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI3_COMMAND <SDRAM_DFII_PI3_COMMAND>`             | :ref:`0xf000284c <SDRAM_DFII_PI3_COMMAND>`       |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI3_COMMAND_ISSUE <SDRAM_DFII_PI3_COMMAND_ISSUE>` | :ref:`0xf0002850 <SDRAM_DFII_PI3_COMMAND_ISSUE>` |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI3_ADDRESS <SDRAM_DFII_PI3_ADDRESS>`             | :ref:`0xf0002854 <SDRAM_DFII_PI3_ADDRESS>`       |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI3_BADDRESS <SDRAM_DFII_PI3_BADDRESS>`           | :ref:`0xf0002858 <SDRAM_DFII_PI3_BADDRESS>`      |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI3_WRDATA <SDRAM_DFII_PI3_WRDATA>`               | :ref:`0xf000285c <SDRAM_DFII_PI3_WRDATA>`        |
+--------------------------------------------------------------------+--------------------------------------------------+
| :ref:`SDRAM_DFII_PI3_RDDATA <SDRAM_DFII_PI3_RDDATA>`               | :ref:`0xf0002860 <SDRAM_DFII_PI3_RDDATA>`        |
+--------------------------------------------------------------------+--------------------------------------------------+

SDRAM_DFII_CONTROL
^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x0 = 0xf0002800`

    Control DFI signals common to all phases

    .. wavedrom::
        :caption: SDRAM_DFII_CONTROL

        {
            "reg": [
                {"name": "sel",  "attr": '1', "bits": 1},
                {"name": "cke",  "bits": 1},
                {"name": "odt",  "bits": 1},
                {"name": "reset_n",  "bits": 1},
                {"bits": 28}
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


+-------+---------+-------------------------------------------+
| Field | Name    | Description                               |
+=======+=========+===========================================+
| [0]   | SEL     |                                           |
|       |         |                                           |
|       |         | +---------+-----------------------------+ |
|       |         | | Value   | Description                 | |
|       |         | +=========+=============================+ |
|       |         | | ``0b0`` | Software (CPU) control.     | |
|       |         | +---------+-----------------------------+ |
|       |         | | ``0b1`` | Hardware control (default). | |
|       |         | +---------+-----------------------------+ |
+-------+---------+-------------------------------------------+
| [1]   | CKE     | DFI clock enable bus                      |
+-------+---------+-------------------------------------------+
| [2]   | ODT     | DFI on-die termination bus                |
+-------+---------+-------------------------------------------+
| [3]   | RESET_N | DFI clock reset bus                       |
+-------+---------+-------------------------------------------+

SDRAM_DFII_PI0_COMMAND
^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x4 = 0xf0002804`

    Control DFI signals on a single phase

    .. wavedrom::
        :caption: SDRAM_DFII_PI0_COMMAND

        {
            "reg": [
                {"name": "cs",  "bits": 1},
                {"name": "we",  "bits": 1},
                {"name": "cas",  "bits": 1},
                {"name": "ras",  "bits": 1},
                {"name": "wren",  "bits": 1},
                {"name": "rden",  "bits": 1},
                {"name": "cs_top",  "bits": 1},
                {"name": "cs_bottom",  "bits": 1},
                {"bits": 24}
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


+-------+-----------+------------------------------------------+
| Field | Name      | Description                              |
+=======+===========+==========================================+
| [0]   | CS        | DFI chip select bus                      |
+-------+-----------+------------------------------------------+
| [1]   | WE        | DFI write enable bus                     |
+-------+-----------+------------------------------------------+
| [2]   | CAS       | DFI column address strobe bus            |
+-------+-----------+------------------------------------------+
| [3]   | RAS       | DFI row address strobe bus               |
+-------+-----------+------------------------------------------+
| [4]   | WREN      | DFI write data enable bus                |
+-------+-----------+------------------------------------------+
| [5]   | RDEN      | DFI read data enable bus                 |
+-------+-----------+------------------------------------------+
| [6]   | CS_TOP    | DFI chip select bus for top half only    |
+-------+-----------+------------------------------------------+
| [7]   | CS_BOTTOM | DFI chip select bus for bottom half only |
+-------+-----------+------------------------------------------+

SDRAM_DFII_PI0_COMMAND_ISSUE
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x8 = 0xf0002808`


    .. wavedrom::
        :caption: SDRAM_DFII_PI0_COMMAND_ISSUE

        {
            "reg": [
                {"name": "dfii_pi0_command_issue", "bits": 1},
                {"bits": 31},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


SDRAM_DFII_PI0_ADDRESS
^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0xc = 0xf000280c`

    DFI address bus

    .. wavedrom::
        :caption: SDRAM_DFII_PI0_ADDRESS

        {
            "reg": [
                {"name": "dfii_pi0_address[13:0]", "bits": 14},
                {"bits": 18},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


SDRAM_DFII_PI0_BADDRESS
^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x10 = 0xf0002810`

    DFI bank address bus

    .. wavedrom::
        :caption: SDRAM_DFII_PI0_BADDRESS

        {
            "reg": [
                {"name": "dfii_pi0_baddress[2:0]", "bits": 3},
                {"bits": 29},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


SDRAM_DFII_PI0_WRDATA
^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x14 = 0xf0002814`

    DFI write data bus

    .. wavedrom::
        :caption: SDRAM_DFII_PI0_WRDATA

        {
            "reg": [
                {"name": "dfii_pi0_wrdata[31:0]", "bits": 32}
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


SDRAM_DFII_PI0_RDDATA
^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x18 = 0xf0002818`

    DFI read data bus

    .. wavedrom::
        :caption: SDRAM_DFII_PI0_RDDATA

        {
            "reg": [
                {"name": "dfii_pi0_rddata[31:0]", "bits": 32}
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


SDRAM_DFII_PI1_COMMAND
^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x1c = 0xf000281c`

    Control DFI signals on a single phase

    .. wavedrom::
        :caption: SDRAM_DFII_PI1_COMMAND

        {
            "reg": [
                {"name": "cs",  "bits": 1},
                {"name": "we",  "bits": 1},
                {"name": "cas",  "bits": 1},
                {"name": "ras",  "bits": 1},
                {"name": "wren",  "bits": 1},
                {"name": "rden",  "bits": 1},
                {"name": "cs_top",  "bits": 1},
                {"name": "cs_bottom",  "bits": 1},
                {"bits": 24}
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


+-------+-----------+------------------------------------------+
| Field | Name      | Description                              |
+=======+===========+==========================================+
| [0]   | CS        | DFI chip select bus                      |
+-------+-----------+------------------------------------------+
| [1]   | WE        | DFI write enable bus                     |
+-------+-----------+------------------------------------------+
| [2]   | CAS       | DFI column address strobe bus            |
+-------+-----------+------------------------------------------+
| [3]   | RAS       | DFI row address strobe bus               |
+-------+-----------+------------------------------------------+
| [4]   | WREN      | DFI write data enable bus                |
+-------+-----------+------------------------------------------+
| [5]   | RDEN      | DFI read data enable bus                 |
+-------+-----------+------------------------------------------+
| [6]   | CS_TOP    | DFI chip select bus for top half only    |
+-------+-----------+------------------------------------------+
| [7]   | CS_BOTTOM | DFI chip select bus for bottom half only |
+-------+-----------+------------------------------------------+

SDRAM_DFII_PI1_COMMAND_ISSUE
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x20 = 0xf0002820`


    .. wavedrom::
        :caption: SDRAM_DFII_PI1_COMMAND_ISSUE

        {
            "reg": [
                {"name": "dfii_pi1_command_issue", "bits": 1},
                {"bits": 31},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


SDRAM_DFII_PI1_ADDRESS
^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x24 = 0xf0002824`

    DFI address bus

    .. wavedrom::
        :caption: SDRAM_DFII_PI1_ADDRESS

        {
            "reg": [
                {"name": "dfii_pi1_address[13:0]", "bits": 14},
                {"bits": 18},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


SDRAM_DFII_PI1_BADDRESS
^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x28 = 0xf0002828`

    DFI bank address bus

    .. wavedrom::
        :caption: SDRAM_DFII_PI1_BADDRESS

        {
            "reg": [
                {"name": "dfii_pi1_baddress[2:0]", "bits": 3},
                {"bits": 29},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


SDRAM_DFII_PI1_WRDATA
^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x2c = 0xf000282c`

    DFI write data bus

    .. wavedrom::
        :caption: SDRAM_DFII_PI1_WRDATA

        {
            "reg": [
                {"name": "dfii_pi1_wrdata[31:0]", "bits": 32}
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


SDRAM_DFII_PI1_RDDATA
^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x30 = 0xf0002830`

    DFI read data bus

    .. wavedrom::
        :caption: SDRAM_DFII_PI1_RDDATA

        {
            "reg": [
                {"name": "dfii_pi1_rddata[31:0]", "bits": 32}
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


SDRAM_DFII_PI2_COMMAND
^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x34 = 0xf0002834`

    Control DFI signals on a single phase

    .. wavedrom::
        :caption: SDRAM_DFII_PI2_COMMAND

        {
            "reg": [
                {"name": "cs",  "bits": 1},
                {"name": "we",  "bits": 1},
                {"name": "cas",  "bits": 1},
                {"name": "ras",  "bits": 1},
                {"name": "wren",  "bits": 1},
                {"name": "rden",  "bits": 1},
                {"name": "cs_top",  "bits": 1},
                {"name": "cs_bottom",  "bits": 1},
                {"bits": 24}
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


+-------+-----------+------------------------------------------+
| Field | Name      | Description                              |
+=======+===========+==========================================+
| [0]   | CS        | DFI chip select bus                      |
+-------+-----------+------------------------------------------+
| [1]   | WE        | DFI write enable bus                     |
+-------+-----------+------------------------------------------+
| [2]   | CAS       | DFI column address strobe bus            |
+-------+-----------+------------------------------------------+
| [3]   | RAS       | DFI row address strobe bus               |
+-------+-----------+------------------------------------------+
| [4]   | WREN      | DFI write data enable bus                |
+-------+-----------+------------------------------------------+
| [5]   | RDEN      | DFI read data enable bus                 |
+-------+-----------+------------------------------------------+
| [6]   | CS_TOP    | DFI chip select bus for top half only    |
+-------+-----------+------------------------------------------+
| [7]   | CS_BOTTOM | DFI chip select bus for bottom half only |
+-------+-----------+------------------------------------------+

SDRAM_DFII_PI2_COMMAND_ISSUE
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x38 = 0xf0002838`


    .. wavedrom::
        :caption: SDRAM_DFII_PI2_COMMAND_ISSUE

        {
            "reg": [
                {"name": "dfii_pi2_command_issue", "bits": 1},
                {"bits": 31},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


SDRAM_DFII_PI2_ADDRESS
^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x3c = 0xf000283c`

    DFI address bus

    .. wavedrom::
        :caption: SDRAM_DFII_PI2_ADDRESS

        {
            "reg": [
                {"name": "dfii_pi2_address[13:0]", "bits": 14},
                {"bits": 18},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


SDRAM_DFII_PI2_BADDRESS
^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x40 = 0xf0002840`

    DFI bank address bus

    .. wavedrom::
        :caption: SDRAM_DFII_PI2_BADDRESS

        {
            "reg": [
                {"name": "dfii_pi2_baddress[2:0]", "bits": 3},
                {"bits": 29},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


SDRAM_DFII_PI2_WRDATA
^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x44 = 0xf0002844`

    DFI write data bus

    .. wavedrom::
        :caption: SDRAM_DFII_PI2_WRDATA

        {
            "reg": [
                {"name": "dfii_pi2_wrdata[31:0]", "bits": 32}
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


SDRAM_DFII_PI2_RDDATA
^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x48 = 0xf0002848`

    DFI read data bus

    .. wavedrom::
        :caption: SDRAM_DFII_PI2_RDDATA

        {
            "reg": [
                {"name": "dfii_pi2_rddata[31:0]", "bits": 32}
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


SDRAM_DFII_PI3_COMMAND
^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x4c = 0xf000284c`

    Control DFI signals on a single phase

    .. wavedrom::
        :caption: SDRAM_DFII_PI3_COMMAND

        {
            "reg": [
                {"name": "cs",  "bits": 1},
                {"name": "we",  "bits": 1},
                {"name": "cas",  "bits": 1},
                {"name": "ras",  "bits": 1},
                {"name": "wren",  "bits": 1},
                {"name": "rden",  "bits": 1},
                {"name": "cs_top",  "bits": 1},
                {"name": "cs_bottom",  "bits": 1},
                {"bits": 24}
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


+-------+-----------+------------------------------------------+
| Field | Name      | Description                              |
+=======+===========+==========================================+
| [0]   | CS        | DFI chip select bus                      |
+-------+-----------+------------------------------------------+
| [1]   | WE        | DFI write enable bus                     |
+-------+-----------+------------------------------------------+
| [2]   | CAS       | DFI column address strobe bus            |
+-------+-----------+------------------------------------------+
| [3]   | RAS       | DFI row address strobe bus               |
+-------+-----------+------------------------------------------+
| [4]   | WREN      | DFI write data enable bus                |
+-------+-----------+------------------------------------------+
| [5]   | RDEN      | DFI read data enable bus                 |
+-------+-----------+------------------------------------------+
| [6]   | CS_TOP    | DFI chip select bus for top half only    |
+-------+-----------+------------------------------------------+
| [7]   | CS_BOTTOM | DFI chip select bus for bottom half only |
+-------+-----------+------------------------------------------+

SDRAM_DFII_PI3_COMMAND_ISSUE
^^^^^^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x50 = 0xf0002850`


    .. wavedrom::
        :caption: SDRAM_DFII_PI3_COMMAND_ISSUE

        {
            "reg": [
                {"name": "dfii_pi3_command_issue", "bits": 1},
                {"bits": 31},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


SDRAM_DFII_PI3_ADDRESS
^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x54 = 0xf0002854`

    DFI address bus

    .. wavedrom::
        :caption: SDRAM_DFII_PI3_ADDRESS

        {
            "reg": [
                {"name": "dfii_pi3_address[13:0]", "bits": 14},
                {"bits": 18},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


SDRAM_DFII_PI3_BADDRESS
^^^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x58 = 0xf0002858`

    DFI bank address bus

    .. wavedrom::
        :caption: SDRAM_DFII_PI3_BADDRESS

        {
            "reg": [
                {"name": "dfii_pi3_baddress[2:0]", "bits": 3},
                {"bits": 29},
            ], "config": {"hspace": 400, "bits": 32, "lanes": 4 }, "options": {"hspace": 400, "bits": 32, "lanes": 4}
        }


SDRAM_DFII_PI3_WRDATA
^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x5c = 0xf000285c`

    DFI write data bus

    .. wavedrom::
        :caption: SDRAM_DFII_PI3_WRDATA

        {
            "reg": [
                {"name": "dfii_pi3_wrdata[31:0]", "bits": 32}
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


SDRAM_DFII_PI3_RDDATA
^^^^^^^^^^^^^^^^^^^^^

`Address: 0xf0002800 + 0x60 = 0xf0002860`

    DFI read data bus

    .. wavedrom::
        :caption: SDRAM_DFII_PI3_RDDATA

        {
            "reg": [
                {"name": "dfii_pi3_rddata[31:0]", "bits": 32}
            ], "config": {"hspace": 400, "bits": 32, "lanes": 1 }, "options": {"hspace": 400, "bits": 32, "lanes": 1}
        }


