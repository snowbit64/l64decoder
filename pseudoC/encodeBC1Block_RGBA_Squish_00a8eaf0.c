// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encodeBC1Block_RGBA_Squish
// Entry Point: 00a8eaf0
// Size: 192 bytes
// Signature: undefined __cdecl encodeBC1Block_RGBA_Squish(uint * param_1, uint param_2, uchar * param_3)


/* DXTUtil::encodeBC1Block_RGBA_Squish(unsigned int const*, unsigned int, unsigned char*) */

void DXTUtil::encodeBC1Block_RGBA_Squish(uint *param_1,uint param_2,uchar *param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_60 = param_1[param_2];
  uStack_5c = param_1[param_2 + 1];
  uVar2 = param_2 * 3;
  uStack_68 = *(undefined8 *)(param_1 + 2);
  local_70 = *(undefined8 *)param_1;
  local_58 = param_1[param_2 + 2];
  uStack_54 = param_1[param_2 + 3];
  local_50 = *(undefined8 *)(param_1 + param_2 * 2);
  uStack_48 = *(undefined8 *)(param_1 + (param_2 * 2 + 2));
  local_40 = param_1[uVar2];
  uStack_3c = param_1[uVar2 + 1];
  local_38 = param_1[uVar2 + 2];
  uStack_34 = param_1[uVar2 + 3];
  squish::Compress((uchar *)&local_70,param_3,0x51);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


