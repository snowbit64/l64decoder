// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078c5a0
// Entry Point: 0078c5a0
// Size: 472 bytes
// Signature: undefined FUN_0078c5a0(void)


void FUN_0078c5a0(char **param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  uint local_68 [2];
  ulong *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar3 = (uint)(*(uint3 *)((long)param_1 + 0x1c) >> 1);
  uVar13 = (ulong)uVar3;
  if (*(uint3 *)((long)param_1 + 0x1c) < 2) {
    puVar11 = (ulong *)0x0;
    goto LAB_0078c688;
  }
  puVar7 = (ulong *)operator_new__(uVar13 << 4 | 8);
  uVar1 = uVar13 - 1 & 0xfffffffffffffff;
  puVar11 = puVar7 + 1;
  *puVar7 = uVar13;
  puVar8 = puVar11;
  if (uVar1 == 0) {
LAB_0078c648:
    do {
      puVar7 = puVar8 + 2;
      *(undefined2 *)puVar8 = 0;
      puVar8 = puVar7;
    } while (puVar7 != puVar11 + uVar13 * 2);
  }
  else {
    uVar1 = uVar1 + 1;
    lVar12 = (long)puVar7 + 0x19;
    uVar9 = uVar1 & 0x1ffffffffffffffe;
    uVar10 = uVar9;
    do {
      *(undefined2 *)(lVar12 + -0x11) = 0;
      uVar10 = uVar10 - 2;
      *(undefined2 *)(lVar12 + -1) = 0;
      lVar12 = lVar12 + 0x20;
    } while (uVar10 != 0);
    puVar8 = puVar11 + uVar9 * 2;
    if (uVar1 != uVar9) goto LAB_0078c648;
  }
  lVar12 = 0;
  uVar2 = uVar3;
  if (uVar3 < 2) {
    uVar2 = 1;
  }
  do {
    JSONUtil::Atom::setFromValue((Atom *)((long)puVar11 + lVar12),(Value *)(param_1[2] + lVar12));
    lVar12 = lVar12 + 0x10;
  } while ((ulong)uVar2 * 0x10 - lVar12 != 0);
LAB_0078c688:
  ReflectionUtil::deleteInvocationArgValue((Value *)(param_1 + 2));
  local_68[0] = uVar3;
  local_60 = puVar11;
  if (((NgGameStats::getInstance()::obj & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(&NgGameStats::getInstance()::obj), iVar6 != 0)) {
    DAT_01048e80 = 0;
    DAT_01048e78 = 0;
    NgGameStats::getInstance()::obj = &DAT_01048e78;
    __cxa_atexit(NgGameStats::~NgGameStats,&NgGameStats::getInstance()::obj,&PTR_LOOP_00fd8de0);
    __cxa_guard_release(&NgGameStats::getInstance()::obj);
  }
  bVar5 = NgGameStats::postStat
                    ((NgGameStats *)&NgGameStats::getInstance()::obj,*param_1,(ParamSet *)local_68);
  *(undefined4 *)(param_1 + 0x21) = 3;
  *(byte *)(param_1 + 0x20) = bVar5 & 1;
  if (puVar11 != (ulong *)0x0) {
    uVar13 = puVar11[-1];
    if (uVar13 != 0) {
      lVar12 = uVar13 << 4;
      do {
        JSONUtil::Atom::clear();
        lVar12 = lVar12 + -0x10;
      } while (lVar12 != 0);
    }
    operator_delete__(puVar11 + -1);
  }
  if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


