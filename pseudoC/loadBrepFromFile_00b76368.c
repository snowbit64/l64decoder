// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadBrepFromFile
// Entry Point: 00b76368
// Size: 252 bytes
// Signature: undefined __cdecl loadBrepFromFile(File * param_1, bool * param_2)


/* BrepUtil::loadBrepFromFile(File*, bool&) */

undefined8 BrepUtil::loadBrepFromFile(File *param_1,bool *param_2)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uchar *puVar5;
  undefined8 uVar6;
  ushort local_50;
  ushort local_4e;
  int local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *param_2 = false;
  iVar3 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_50,8);
  if (iVar3 == 8) {
    uVar1 = (uint)local_50 * 0xc + (uint)local_4e * 0x14 + local_4c * 0x12;
    puVar5 = (uchar *)operator_new__((ulong)uVar1);
    uVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,puVar5,(ulong)uVar1);
    if (uVar4 == uVar1) {
      *param_2 = true;
      uVar6 = loadBrepFromFileBuffer((BrepFileHeader *)&local_50,puVar5);
    }
    else {
      uVar6 = 0;
    }
    operator_delete__(puVar5);
  }
  else {
    uVar6 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


