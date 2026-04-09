// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decodeBC7Block
// Entry Point: 00a860ac
// Size: 136 bytes
// Signature: undefined __cdecl decodeBC7Block(uchar * param_1, uchar * param_2, uint param_3)


/* BC6BC7Util::decodeBC7Block(unsigned char const*, unsigned char*, unsigned int) */

void BC6BC7Util::decodeBC7Block(uchar *param_1,uchar *param_2,uint param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  uVar4 = (ulong)param_3;
  local_38 = *(long *)(lVar3 + 0x28);
  D3DX_BC7::Decode((D3DX_BC7 *)param_1,(LDRColorA *)&local_78,false);
  puVar1 = (undefined8 *)(param_2 + uVar4);
  puVar2 = (undefined8 *)((long)puVar1 + uVar4);
  *(undefined8 *)(param_2 + 8) = uStack_70;
  *(undefined8 *)param_2 = local_78;
  puVar1[1] = uStack_60;
  *puVar1 = local_68;
  puVar2[1] = uStack_50;
  *puVar2 = local_58;
  ((undefined8 *)((long)puVar2 + uVar4))[1] = uStack_40;
  *(undefined8 *)((long)puVar2 + uVar4) = local_48;
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


