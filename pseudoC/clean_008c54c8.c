// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clean
// Entry Point: 008c54c8
// Size: 428 bytes
// Signature: undefined clean(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* InstancedGeometryManager::clean() */

void InstancedGeometryManager::clean(void)

{
  bool bVar1;
  undefined8 *in_x0;
  long *plVar2;
  long **pplVar3;
  long **pplVar4;
  long *plVar5;
  
  pplVar4 = (long **)*in_x0;
  while (pplVar4 != (long **)(in_x0 + 1)) {
    plVar5 = pplVar4[4];
    plVar2 = (long *)plVar5[7];
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if ((long *)plVar5[8] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[8] + 8))();
    }
    if ((long *)plVar5[9] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[9] + 8))();
    }
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0;
    pplVar3 = (long **)pplVar4[1];
    if ((long **)pplVar4[1] == (long **)0x0) {
      pplVar3 = pplVar4 + 2;
      bVar1 = (long **)**pplVar3 != pplVar4;
      pplVar4 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar2 = *pplVar3;
          pplVar3 = (long **)(plVar2 + 2);
          pplVar4 = (long **)*pplVar3;
        } while (*pplVar4 != plVar2);
      }
    }
    else {
      do {
        pplVar4 = pplVar3;
        pplVar3 = (long **)*pplVar4;
      } while (*pplVar4 != (long *)0x0);
    }
  }
  pplVar4 = (long **)in_x0[4];
  while (pplVar4 != (long **)(in_x0 + 5)) {
    plVar2 = pplVar4[4];
    if (*(char *)(plVar2 + 2) == '\0') {
      if (*(int *)((long)plVar2 + 0x14) == 4) {
        VertexBufferPool::releaseVertexBuffer
                  ((VertexBufferPool *)in_x0[7],(IVertexBuffer *)plVar2[3]);
      }
      else if ((long *)plVar2[3] != (long *)0x0) {
        (**(code **)(*(long *)plVar2[3] + 8))();
      }
      plVar2[3] = 0;
    }
    else {
      if ((long *)plVar2[5] != (long *)0x0) {
        (**(code **)(*(long *)plVar2[5] + 8))();
      }
      plVar2[5] = 0;
    }
    pplVar3 = (long **)pplVar4[1];
    *(undefined4 *)(plVar2 + 4) = 0;
    if (pplVar3 == (long **)0x0) {
      pplVar3 = pplVar4 + 2;
      bVar1 = (long **)**pplVar3 != pplVar4;
      pplVar4 = (long **)*pplVar3;
      if (bVar1) {
        do {
          plVar2 = *pplVar3;
          pplVar3 = (long **)(plVar2 + 2);
          pplVar4 = (long **)*pplVar3;
        } while (*pplVar4 != plVar2);
      }
    }
    else {
      do {
        pplVar4 = pplVar3;
        pplVar3 = (long **)*pplVar4;
      } while (*pplVar4 != (long *)0x0);
    }
  }
  VertexBufferPool::cleanUnusedVertexBuffers((VertexBufferPool *)in_x0[7],0);
  *(int *)(in_x0 + 3) = (int)in_x0[2];
  return;
}


