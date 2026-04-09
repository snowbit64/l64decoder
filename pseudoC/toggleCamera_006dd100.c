// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toggleCamera
// Entry Point: 006dd100
// Size: 216 bytes
// Signature: undefined toggleCamera(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::toggleCamera() */

void EngineApplication::toggleCamera(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  Node *pNVar6;
  ulong uVar7;
  ulong uVar8;
  void *local_50;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar4 = EngineManager::getInstance();
  lVar5 = Renderer::getCamera();
  pNVar6 = (Node *)Renderer::getRootNode();
  if ((lVar5 != 0) && (pNVar6 != (Node *)0x0)) {
    local_50 = (void *)0x0;
    local_48 = (void *)0x0;
    local_40 = 0;
                    /* try { // try from 006dd14c to 006dd157 has its CatchHandler @ 006dd1dc */
    NodeUtil::findByType(pNVar6,0x8000,(vector *)&local_50);
    uVar7 = (long)local_48 - (long)local_50 >> 3;
    if ((long)local_48 - (long)local_50 != 0) {
      uVar8 = 0;
      do {
        lVar1 = uVar8 * 8;
        uVar8 = (ulong)((int)uVar8 + 1);
        if (*(long *)((long)local_50 + lVar1) == lVar5) goto LAB_006dd188;
      } while (uVar8 < uVar7);
    }
    uVar8 = 0;
LAB_006dd188:
    uVar2 = 0;
    if (uVar7 != 0) {
      uVar2 = uVar8 / uVar7;
    }
                    /* try { // try from 006dd19c to 006dd19f has its CatchHandler @ 006dd1d8 */
    Renderer::setCamera(*(Renderer **)(lVar4 + 0xb8),
                        *(Camera **)((long)local_50 + (uVar8 - uVar2 * uVar7) * 8));
    if (local_50 != (void *)0x0) {
      local_48 = local_50;
      operator_delete(local_50);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


