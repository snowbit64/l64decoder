// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: enableByName
// Entry Point: 006f55a4
// Size: 284 bytes
// Signature: undefined __thiscall enableByName(StatsOverlayManager * this, char * param_1, uint param_2)


/* StatsOverlayManager::enableByName(char const*, unsigned int) */

void __thiscall
StatsOverlayManager::enableByName(StatsOverlayManager *this,char *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  char *__s2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  
  lVar4 = *(long *)this;
  if (*(long *)(this + 8) != lVar4) {
    uVar6 = 0;
    do {
      __s2 = (char *)(**(code **)(**(long **)(lVar4 + uVar6 * 0x10) + 0x20))();
      iVar2 = strcmp(param_1,__s2);
      lVar4 = *(long *)this;
      if ((iVar2 == 0) && (*(uint *)(lVar4 + uVar6 * 0x10 + 8) == param_2)) {
        iVar2 = (int)uVar6 + 1;
        if (*(int *)(this + 0x18) == 0) {
          plVar3 = (long *)0x0;
          *(int *)(this + 0x18) = iVar2;
        }
        else {
          uVar1 = *(int *)(this + 0x18) - 1;
          plVar3 = *(long **)(lVar4 + (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 |
                                      (ulong)uVar1 << 4));
          *(int *)(this + 0x18) = iVar2;
        }
        if (iVar2 == 0) {
          plVar5 = (long *)0x0;
          if (plVar3 == (long *)0x0) {
            return;
          }
        }
        else {
          plVar5 = *(long **)(lVar4 + (-(uVar6 >> 0x1f) & 0xfffffff000000000 | uVar6 << 4));
          if (plVar5 == plVar3) {
            return;
          }
        }
        if (plVar3 != (long *)0x0) {
          *(undefined *)(plVar3 + 1) = 0;
          (**(code **)(*plVar3 + 0x18))(plVar3,0);
        }
        if (plVar5 != (long *)0x0) {
          *(undefined *)(plVar5 + 1) = 1;
                    /* WARNING: Could not recover jumptable at 0x006f56ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x18))(plVar5,1);
          return;
        }
        return;
      }
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (uVar6 < (ulong)(*(long *)(this + 8) - lVar4 >> 4));
  }
  return;
}


