// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: releaseSharedI3D
// Entry Point: 00906488
// Size: 516 bytes
// Signature: undefined __thiscall releaseSharedI3D(I3DManager * this, uint param_1, bool param_2)


/* I3DManager::releaseSharedI3D(unsigned int, bool) */

void __thiscall I3DManager::releaseSharedI3D(I3DManager *this,uint param_1,bool param_2)

{
  __tree_node_base **pp_Var1;
  size_t __n;
  int iVar2;
  __tree_node_base **pp_Var3;
  uint **ppuVar4;
  __tree_node_base **pp_Var5;
  __tree_node_base **pp_Var6;
  __tree_node_base *p_Var7;
  SharedI3D *pSVar8;
  uint *puVar9;
  __tree_node_base **pp_Var10;
  long lVar11;
  
  if (param_1 != 0) {
    ppuVar4 = *(uint ***)this;
    if (ppuVar4 != *(uint ***)(this + 8)) {
      lVar11 = -(long)ppuVar4;
      do {
        puVar9 = *ppuVar4;
        if (*puVar9 == param_1) {
          pSVar8 = *(SharedI3D **)(puVar9 + 2);
          if (*(long **)(puVar9 + 10) != (long *)0x0) {
            (**(code **)(**(long **)(puVar9 + 10) + 8))();
          }
          if (*(long **)(puVar9 + 8) != (long *)0x0) {
            (**(code **)(**(long **)(puVar9 + 8) + 8))();
          }
          operator_delete(puVar9);
          __n = *(long *)(this + 8) - (long)(void *)(8 - lVar11);
          if (__n != 0) {
            memmove((void *)-lVar11,(void *)(8 - lVar11),__n);
          }
          *(size_t *)(this + 8) = (long)(void *)-lVar11 + __n;
          if (pSVar8 == (SharedI3D *)0x0) {
            return;
          }
          goto LAB_0090662c;
        }
        ppuVar4 = ppuVar4 + 1;
        lVar11 = lVar11 + -8;
      } while (ppuVar4 != *(uint ***)(this + 8));
    }
    pp_Var5 = (__tree_node_base **)(this + 0x20);
    pp_Var3 = (__tree_node_base **)*pp_Var5;
    pp_Var6 = pp_Var3;
    pp_Var10 = pp_Var5;
    if (pp_Var3 != (__tree_node_base **)0x0) {
      do {
        if (*(uint *)(pp_Var6 + 4) >= param_1) {
          pp_Var10 = pp_Var6;
        }
        pp_Var1 = pp_Var6 + (*(uint *)(pp_Var6 + 4) < param_1);
        pp_Var6 = (__tree_node_base **)*pp_Var1;
      } while ((__tree_node_base **)*pp_Var1 != (__tree_node_base **)0x0);
      if ((pp_Var10 != pp_Var5) && (*(uint *)(pp_Var10 + 4) <= param_1)) {
        pSVar8 = (SharedI3D *)pp_Var10[5];
        pp_Var6 = (__tree_node_base **)pp_Var10[1];
        if ((__tree_node_base **)pp_Var10[1] == (__tree_node_base **)0x0) {
          pp_Var6 = pp_Var10 + 2;
          pp_Var5 = (__tree_node_base **)*pp_Var6;
          if ((__tree_node_base **)*pp_Var5 != pp_Var10) {
            do {
              p_Var7 = *pp_Var6;
              pp_Var6 = (__tree_node_base **)(p_Var7 + 0x10);
              pp_Var5 = (__tree_node_base **)*pp_Var6;
            } while (*pp_Var5 != p_Var7);
          }
        }
        else {
          do {
            pp_Var5 = pp_Var6;
            pp_Var6 = (__tree_node_base **)*pp_Var5;
          } while ((__tree_node_base **)*pp_Var5 != (__tree_node_base **)0x0);
        }
        if (*(__tree_node_base ***)(this + 0x18) == pp_Var10) {
          *(__tree_node_base ***)(this + 0x18) = pp_Var5;
        }
        *(long *)(this + 0x28) = *(long *)(this + 0x28) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  ((__tree_node_base *)pp_Var3,(__tree_node_base *)pp_Var10);
        operator_delete(pp_Var10);
LAB_0090662c:
        unrefSharedI3D(this,pSVar8);
        return;
      }
    }
    if (!param_2) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar2 != 0))
      {
                    /* try { // try from 00906654 to 0090665f has its CatchHandler @ 0090668c */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: I3D streaming request ID %u is not valid\n",(ulong)param_1);
    }
  }
  return;
}


