// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: beginFrame
// Entry Point: 00a47fec
// Size: 340 bytes
// Signature: undefined beginFrame(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* SharedRenderArgs::beginFrame() */

void SharedRenderArgs::beginFrame(void)

{
  bool bVar1;
  long in_x0;
  long **pplVar2;
  ulong uVar3;
  long *plVar4;
  long **pplVar5;
  long **pplVar6;
  double dVar7;
  
  pplVar5 = *(long ***)(in_x0 + 0x148);
  uVar3 = *(long *)(in_x0 + 0x90) + 1;
  *(ulong *)(in_x0 + 0x90) = uVar3;
  if (pplVar5 != (long **)(in_x0 + 0x150)) {
    while( true ) {
      if ((long)pplVar5[8] + 0x14U < uVar3) {
        if (pplVar5[7] != (long *)0x0) {
          (**(code **)(*pplVar5[7] + 8))();
        }
        pplVar2 = (long **)pplVar5[1];
        if ((long **)pplVar5[1] == (long **)0x0) {
          pplVar2 = pplVar5 + 2;
          pplVar6 = (long **)*pplVar2;
          if ((long **)*pplVar6 != pplVar5) {
            do {
              plVar4 = *pplVar2;
              pplVar2 = (long **)(plVar4 + 2);
              pplVar6 = (long **)*pplVar2;
            } while (*pplVar6 != plVar4);
          }
        }
        else {
          do {
            pplVar6 = pplVar2;
            pplVar2 = (long **)*pplVar6;
          } while (*pplVar6 != (long *)0x0);
        }
        if (*(long ***)(in_x0 + 0x148) == pplVar5) {
          *(long ***)(in_x0 + 0x148) = pplVar6;
        }
        *(long *)(in_x0 + 0x158) = *(long *)(in_x0 + 0x158) + -1;
        std::__ndk1::__tree_remove<std::__ndk1::__tree_node_base<void*>*>
                  (*(__tree_node_base **)(in_x0 + 0x150),(__tree_node_base *)pplVar5);
        operator_delete(pplVar5);
        pplVar5 = pplVar6;
      }
      else {
        pplVar2 = (long **)pplVar5[1];
        if ((long **)pplVar5[1] == (long **)0x0) {
          pplVar2 = pplVar5 + 2;
          bVar1 = (long **)**pplVar2 != pplVar5;
          pplVar5 = (long **)*pplVar2;
          if (bVar1) {
            do {
              plVar4 = *pplVar2;
              pplVar2 = (long **)(plVar4 + 2);
              pplVar5 = (long **)*pplVar2;
            } while (*pplVar5 != plVar4);
          }
        }
        else {
          do {
            pplVar5 = pplVar2;
            pplVar2 = (long **)*pplVar5;
          } while ((long **)*pplVar5 != (long **)0x0);
        }
      }
      if (pplVar5 == (long **)(in_x0 + 0x150)) break;
      uVar3 = *(ulong *)(in_x0 + 0x90);
    }
  }
  *(undefined4 *)(in_x0 + 0x128) = *(undefined4 *)(in_x0 + 300);
  GlobalTimeManager::getInstance();
  dVar7 = (double)GlobalTimeManager::getCurrentTime();
  *(float *)(in_x0 + 300) = (float)(dVar7 * 0.001);
  return;
}


