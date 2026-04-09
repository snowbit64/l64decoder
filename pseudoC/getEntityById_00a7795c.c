// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getEntityById
// Entry Point: 00a7795c
// Size: 256 bytes
// Signature: undefined __thiscall getEntityById(EntityRegistryManager * this, uint param_1)


/* EntityRegistryManager::getEntityById(unsigned int) */

long __thiscall EntityRegistryManager::getEntityById(EntityRegistryManager *this,uint param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long **pplVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  if (param_1 == 0) {
    lVar8 = 0;
  }
  else {
    uVar7 = (ulong)param_1;
    Mutex::enterCriticalSection();
    uVar2 = *(ulong *)(this + 8);
    if (uVar2 != 0) {
      uVar10 = NEON_cnt(uVar2,1);
      uVar9 = NEON_uaddlv(uVar10,1);
      uVar11 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9);
      if ((uVar11 & 0xffffffff) < 2) {
        uVar3 = (ulong)((int)uVar2 - 1U & param_1);
      }
      else {
        uVar3 = uVar7;
        if (uVar2 <= uVar7) {
          uVar3 = 0;
          if (uVar2 != 0) {
            uVar3 = uVar7 / uVar2;
          }
          uVar3 = uVar7 - uVar3 * uVar2;
        }
      }
      pplVar4 = *(long ***)(*(long *)this + uVar3 * 8);
      if ((pplVar4 != (long **)0x0) && (plVar5 = *pplVar4, plVar5 != (long *)0x0)) {
        do {
          uVar6 = plVar5[1];
          if (uVar6 == uVar7) {
            if (*(uint *)(plVar5 + 2) == param_1) {
              lVar8 = plVar5[3];
              goto LAB_00a77a38;
            }
          }
          else {
            if ((uVar11 & 0xffffffff) < 2) {
              uVar6 = uVar6 & uVar2 - 1;
            }
            else if (uVar2 <= uVar6) {
              uVar1 = 0;
              if (uVar2 != 0) {
                uVar1 = uVar6 / uVar2;
              }
              uVar6 = uVar6 - uVar1 * uVar2;
            }
            if (uVar6 != uVar3) break;
          }
          plVar5 = (long *)*plVar5;
        } while (plVar5 != (long *)0x0);
      }
    }
    lVar8 = 0;
LAB_00a77a38:
    Mutex::leaveCriticalSection();
  }
  return lVar8;
}


