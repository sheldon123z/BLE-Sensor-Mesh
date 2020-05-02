set(srcs
       
        "board.c")

idf_component_register(SRCS "ble_mesh_main.c" "ble_mesh_init.c" "${srcs}"
                    INCLUDE_DIRS  ".")
