// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encodeBC3Block_RGBA_Waveren
// Entry Point: 00a8e704
// Size: 116 bytes
// Signature: undefined __cdecl encodeBC3Block_RGBA_Waveren(uint * param_1, uint param_2, uchar * param_3)


/* DXTUtil::encodeBC3Block_RGBA_Waveren(unsigned int const*, unsigned int, unsigned char*) */

void DXTUtil::encodeBC3Block_RGBA_Waveren(uint *param_1,uint param_2,uchar *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  puVar1 = (undefined8 *)(param_1 + (param_2 << 1));
  uStack_58 = *(undefined8 *)((long)(param_1 + param_2) + 8);
  uStack_60 = *(undefined8 *)(param_1 + param_2);
  puVar2 = (undefined8 *)((long)puVar1 + (ulong)param_2 * 4);
  uStack_38 = puVar2[1];
  uStack_40 = *puVar2;
  uStack_68 = *(undefined8 *)(param_1 + 2);
  local_70 = *(undefined8 *)param_1;
  uStack_48 = puVar1[1];
  local_50 = *puVar1;
  encodeBC3Block_RGBA_Waveren((uchar *)&local_70,param_3);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


