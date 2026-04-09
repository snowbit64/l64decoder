// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_write_fn
// Entry Point: 00dc4a30
// Size: 76 bytes
// Signature: undefined png_set_write_fn(void)


void png_set_write_fn(long param_1,undefined8 param_2,code *param_3,code *param_4)

{
  code *pcVar1;
  code *pcVar2;
  
  if (param_1 != 0) {
    *(undefined8 *)(param_1 + 0x140) = param_2;
    pcVar1 = png_default_write_data;
    if (param_3 != (code *)0x0) {
      pcVar1 = param_3;
    }
    pcVar2 = png_default_flush;
    if (param_4 != (code *)0x0) {
      pcVar2 = param_4;
    }
    *(code **)(param_1 + 0x130) = pcVar1;
    *(code **)(param_1 + 0x2c8) = pcVar2;
    if (*(long *)(param_1 + 0x138) != 0) {
      *(undefined8 *)(param_1 + 0x138) = 0;
      png_warning(param_1,"Can\'t set both read_data_fn and write_data_fn in the same structure");
      return;
    }
  }
  return;
}


