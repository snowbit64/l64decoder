// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_convert_to_rfc1123_buffer
// Entry Point: 00da94e8
// Size: 600 bytes
// Signature: undefined png_convert_to_rfc1123_buffer(void)


void png_convert_to_rfc1123_buffer(long param_1,ushort *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined auStack_50 [5];
  undefined auStack_4b [3];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 != 0) {
    if ((((*param_2 >> 4 < 0x271) && (0xfffffff3 < *(byte *)(param_2 + 1) - 0xd)) &&
        (0xffffffe0 < *(byte *)((long)param_2 + 3) - 0x20)) &&
       (((*(byte *)(param_2 + 2) < 0x18 && (*(byte *)((long)param_2 + 5) < 0x3c)) &&
        (*(byte *)(param_2 + 3) < 0x3d)))) {
      uVar2 = png_format_number(auStack_50,auStack_4b,1);
      uVar3 = png_safecat(param_1,0x1d,0,uVar2);
      uVar4 = uVar3;
      if (uVar3 < 0x1c) {
        uVar4 = uVar3 + 1;
        *(undefined *)(param_1 + uVar3) = 0x20;
      }
      uVar3 = png_safecat(param_1,0x1d,uVar4,&BYTE_005492b0 + (ulong)*(byte *)(param_2 + 1) * 4);
      uVar4 = uVar3;
      if (uVar3 < 0x1c) {
        uVar4 = uVar3 + 1;
        *(undefined *)(param_1 + uVar3) = 0x20;
      }
      uVar2 = png_format_number(auStack_50,auStack_4b,1,*param_2);
      uVar3 = png_safecat(param_1,0x1d,uVar4,uVar2);
      uVar4 = uVar3;
      if (uVar3 < 0x1c) {
        uVar4 = uVar3 + 1;
        *(undefined *)(param_1 + uVar3) = 0x20;
      }
      uVar2 = png_format_number(auStack_50,auStack_4b,2,*(undefined *)(param_2 + 2));
      uVar3 = png_safecat(param_1,0x1d,uVar4,uVar2);
      uVar4 = uVar3;
      if (uVar3 < 0x1c) {
        uVar4 = uVar3 + 1;
        *(undefined *)(param_1 + uVar3) = 0x3a;
      }
      uVar2 = png_format_number(auStack_50,auStack_4b,2,*(undefined *)((long)param_2 + 5));
      uVar3 = png_safecat(param_1,0x1d,uVar4,uVar2);
      uVar4 = uVar3;
      if (uVar3 < 0x1c) {
        uVar4 = uVar3 + 1;
        *(undefined *)(param_1 + uVar3) = 0x3a;
      }
      uVar2 = png_format_number(auStack_50,auStack_4b,2,*(undefined *)(param_2 + 3));
      uVar2 = png_safecat(param_1,0x1d,uVar4,uVar2);
      png_safecat(param_1,0x1d,uVar2," +0000");
      param_1 = 1;
      if (*(long *)(lVar1 + 0x28) == local_48) {
        return;
      }
      goto LAB_00da973c;
    }
    param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
LAB_00da973c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


