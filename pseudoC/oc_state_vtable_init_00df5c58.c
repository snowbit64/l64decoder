// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: oc_state_vtable_init
// Entry Point: 00df5c58
// Size: 104 bytes
// Signature: undefined oc_state_vtable_init(void)


void oc_state_vtable_init(long param_1)

{
  *(code **)(param_1 + 0x40) = oc_frag_copy_c;
  *(code **)(param_1 + 0x48) = oc_frag_recon_intra_c;
  *(code **)(param_1 + 0x50) = oc_frag_recon_inter_c;
  *(code **)(param_1 + 0x58) = oc_frag_recon_inter2_c;
  *(code **)(param_1 + 0x60) = oc_idct8x8_c;
  *(code **)(param_1 + 0x68) = oc_state_frag_recon_c;
  *(code **)(param_1 + 0x70) = oc_state_frag_copy_list_c;
  *(code **)(param_1 + 0x78) = oc_state_loop_filter_frag_rows_c;
  *(code **)(param_1 + 0x80) = oc_restore_fpu_c;
  *(undefined1 **)(param_1 + 0x88) = OC_FZIG_ZAG;
  return;
}


