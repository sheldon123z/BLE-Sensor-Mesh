set(srcs
       
        "board.c")

idf_component_register(SRCS "ble_mesh_init.c" "ble_mesh_main.c" "${srcs}"
                    INCLUDE_DIRS  ".")
