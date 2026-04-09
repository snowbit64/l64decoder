// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d61094
// Entry Point: 00d61094
// Size: 200 bytes
// Signature: undefined FUN_00d61094(void)


void FUN_00d61094(long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar10 = *(long *)(param_1 + 0x208);
  plVar1 = (long *)(***(code ***)(param_1 + 8))(param_1,1,0x4000);
  lVar2 = 0;
  lVar3 = 0;
  lVar4 = 0;
  lVar5 = 0;
  lVar6 = 0;
  lVar7 = 0;
  lVar8 = 0;
  lVar9 = 0x8000;
  *(long **)(lVar10 + 0x10) = plVar1;
  do {
    lVar10 = lVar8 + 0x807fff;
    *plVar1 = lVar7;
    plVar1[0x100] = lVar4;
    lVar8 = lVar8 + 0x8000;
    plVar1[0x200] = lVar9;
    lVar7 = lVar7 + 0x4c8b;
    plVar1[0x300] = lVar2;
    lVar4 = lVar4 + 0x9646;
    plVar1[0x400] = lVar3;
    lVar9 = lVar9 + 0x1d2f;
    plVar1[0x500] = lVar10;
    lVar3 = lVar3 + -0x54ce;
    plVar1[0x700] = lVar6;
    lVar6 = lVar6 + -0x14d1;
    plVar1[0x600] = lVar5;
    plVar1 = plVar1 + 1;
    lVar5 = lVar5 + -0x6b2f;
    lVar2 = lVar2 + -0x2b32;
  } while (lVar8 != 0x800000);
  return;
}


