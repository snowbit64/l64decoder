// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_set_read_fn
// Entry Point: 00db6a08
// Size: 84 bytes
// Signature: undefined png_set_read_fn(void)


void png_set_read_fn(long param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  
  if (param_1 != 0) {
    pcVar1 = png_default_read_data;
    if (param_3 != (code *)0x0) {
      pcVar1 = param_3;
    }
    *(code **)(param_1 + 0x138) = pcVar1;
    *(undefined8 *)(param_1 + 0x140) = param_2;
    if (*(long *)(param_1 + 0x130) != 0) {
      *(undefined8 *)(param_1 + 0x130) = 0;
      png_warning(param_1,"Can\'t set both read_data_fn and write_data_fn in the same structure");
    }
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  return;
}


