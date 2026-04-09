// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cancelI3DLoadTask
// Entry Point: 00943794
// Size: 308 bytes
// Signature: undefined __thiscall cancelI3DLoadTask(I3DStreamingManager * this, uint param_1, bool param_2)


/* I3DStreamingManager::cancelI3DLoadTask(unsigned int, bool) */

void __thiscall
I3DStreamingManager::cancelI3DLoadTask(I3DStreamingManager *this,uint param_1,bool param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  Mutex::enterCriticalSection();
  plVar2 = *(long **)(this + 0x10);
  for (plVar1 = *(long **)(this + 8); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar3 = *plVar1;
    if (*(uint *)(lVar3 + 0x4c8) == param_1) {
      *(undefined *)(lVar3 + 0x4cc) = 1;
      *(undefined4 *)(lVar3 + 0x4d8) = 0;
      if (param_2) {
        if ((*(char *)(lVar3 + 0x4cd) == '\0') || (*(int *)(lVar3 + 0x4d0) == 6)) {
          I3DLoad::deleteSceneGraphRoot();
        }
        if (*(long **)(lVar3 + 0x218) != (long *)0x0) {
          (**(code **)(**(long **)(lVar3 + 0x218) + 8))();
        }
        *(undefined8 *)(lVar3 + 0x218) = 0;
      }
    }
  }
  plVar2 = *(long **)(this + 0x28);
  for (plVar1 = *(long **)(this + 0x20); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar3 = *plVar1;
    if (*(uint *)(lVar3 + 0x4c8) == param_1) {
      *(undefined *)(lVar3 + 0x4cc) = 1;
      *(undefined4 *)(lVar3 + 0x4d8) = 0;
      if (param_2) {
        if ((*(char *)(lVar3 + 0x4cd) == '\0') || (*(int *)(lVar3 + 0x4d0) == 6)) {
          I3DLoad::deleteSceneGraphRoot();
        }
        if (*(long **)(lVar3 + 0x218) != (long *)0x0) {
          (**(code **)(**(long **)(lVar3 + 0x218) + 8))();
        }
        *(undefined8 *)(lVar3 + 0x218) = 0;
      }
    }
  }
  Mutex::leaveCriticalSection();
  return;
}


