// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveBrepToFile
// Entry Point: 00b760b8
// Size: 260 bytes
// Signature: undefined __cdecl saveBrepToFile(Brep * param_1, StringStream * param_2)


/* BrepUtil::saveBrepToFile(Brep const*, StringStream*) */

void BrepUtil::saveBrepToFile(Brep *param_1,StringStream *param_2)

{
  uint uVar1;
  long lVar2;
  uchar *puVar3;
  ushort local_50;
  ushort local_4e;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_4e = (short)((uint)(*(int *)(param_1 + 0x2fa0) - *(int *)(param_1 + 0x2f98)) >> 3) * -0x5555
  ;
  local_50 = (ushort)((uint)(*(int *)(param_1 + 0x2ef8) - *(int *)(param_1 + 0x2ef0)) >> 4);
  local_4c = (int)((ulong)(*(long *)(param_1 + 0x2f70) - *(long *)(param_1 + 0x2f68)) >> 5);
  StringStream::writeBinary(param_2,&local_50,8);
  uVar1 = (uint)local_50 * 0xc + (uint)local_4e * 0x14 + local_4c * 0x12;
  puVar3 = (uchar *)operator_new__((ulong)uVar1);
  saveBrepToFileBuffer(param_1,puVar3);
  StringStream::writeBinary(param_2,puVar3,uVar1);
  operator_delete__(puVar3);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


