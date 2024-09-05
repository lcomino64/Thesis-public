
# Create Project

create_project -force -name arty_a7 -part xc7a35ticsg324-1L
set_msg_config -id {Common 17-55} -new_severity {Warning}

# Add project commands


# Add Sources

read_verilog {/home/lachlancomino/repos/pythondata-cpu-vexriscv-smp/pythondata_cpu_vexriscv_smp/verilog/Ram_1w_1rs_Generic.v}
read_verilog {/home/lachlancomino/repos/pythondata-cpu-vexriscv-smp/pythondata_cpu_vexriscv_smp/verilog/VexRiscvLitexSmpCluster_Cc2_Iw32Is4096Iy1_Dw32Ds4096Dy1_ITs4DTs4_Ldw128_Aes_Ood.v}
read_verilog {/home/lachlancomino/Thesis/Project/scpns/litex/build/arty_a7/gateware/arty_a7.v}

# Add EDIFs


# Add IPs


# Add constraints

read_xdc arty_a7.xdc
set_property PROCESSING_ORDER EARLY [get_files arty_a7.xdc]

# Add pre-synthesis commands


# Synthesis

synth_design -directive default -top arty_a7 -part xc7a35ticsg324-1L

# Synthesis report

report_timing_summary -file arty_a7_timing_synth.rpt
report_utilization -hierarchical -file arty_a7_utilization_hierarchical_synth.rpt
report_utilization -file arty_a7_utilization_synth.rpt
write_checkpoint -force arty_a7_synth.dcp

# Add pre-optimize commands


# Optimize design

opt_design -directive default

# Add pre-placement commands


# Placement

place_design -directive default

# Placement report

report_utilization -hierarchical -file arty_a7_utilization_hierarchical_place.rpt
report_utilization -file arty_a7_utilization_place.rpt
report_io -file arty_a7_io.rpt
report_control_sets -verbose -file arty_a7_control_sets.rpt
report_clock_utilization -file arty_a7_clock_utilization.rpt
write_checkpoint -force arty_a7_place.dcp

# Add pre-routing commands


# Routing

route_design -directive default
phys_opt_design -directive default
write_checkpoint -force arty_a7_route.dcp

# Routing report

report_timing_summary -no_header -no_detailed_paths
report_route_status -file arty_a7_route_status.rpt
report_drc -file arty_a7_drc.rpt
report_timing_summary -datasheet -max_paths 10 -file arty_a7_timing.rpt
report_power -file arty_a7_power.rpt
set_property BITSTREAM.CONFIG.SPI_BUSWIDTH 4 [current_design]

# Bitstream generation

write_bitstream -force arty_a7.bit 
write_cfgmem -force -format bin -interface spix4 -size 16 -loadbit "up 0x0 arty_a7.bit" -file arty_a7.bin

# End

quit