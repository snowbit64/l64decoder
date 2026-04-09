// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addI3DLoadTask
// Entry Point: 00943514
// Size: 620 bytes
// Signature: undefined __thiscall addI3DLoadTask(I3DStreamingManager * this, char * param_1, bool param_2, bool param_3, MeshSplitFileState * param_4, bool param_5, IStreamingCallback * param_6, bool param_7, bool param_8)


/* I3DStreamingManager::addI3DLoadTask(char const*, bool, bool, MeshSplitFileState const*, bool,
   IStreamingCallback*, bool, bool) */

undefined4 __thiscall
I3DStreamingManager::addI3DLoadTask
          (I3DStreamingManager *this,char *param_1,bool param_2,bool param_3,
          MeshSplitFileState *param_4,bool param_5,IStreamingCallback *param_6,bool param_7,
          bool param_8)

{
  int iVar1;
  ulong uVar2;
  char **ppcVar3;
  int iVar4;
  char *__dest;
  void *pvVar5;
  void *__src;
  ulong uVar6;
  undefined4 uVar7;
  
  __dest = (char *)operator_new(0x4e0);
  *(undefined8 *)(__dest + 0x218) = 0;
                    /* try { // try from 00943568 to 0094356b has its CatchHandler @ 00943780 */
  I3DLoad::I3DLoad((I3DLoad *)(__dest + 0x220),(bool *)(__dest + 0x4cc));
  strncpy(__dest,param_1,0x200);
  iVar4 = *(int *)(this + 100);
  uVar7 = 0;
  __dest[0x1ff] = '\0';
  __dest[0x200] = param_2;
  iVar1 = iVar4 + 1;
  __dest[0x201] = param_3;
  if (iVar4 == -1) {
    iVar1 = 1;
  }
  *(MeshSplitFileState **)(__dest + 0x208) = param_4;
  __dest[0x210] = param_5;
  *(IStreamingCallback **)(__dest + 0x218) = param_6;
  *(int *)(__dest + 0x4c8) = iVar4;
  *(int *)(this + 100) = iVar1;
  __dest[0x4cc] = '\0';
  __dest[0x4cd] = '\0';
  if (!param_8) {
    uVar7 = MathUtil::getRandomMinMax(*(float *)(this + 0x68),*(float *)(this + 0x6c));
  }
  *(undefined4 *)(__dest + 0x4d8) = uVar7;
  *(undefined4 *)(__dest + 0x4dc) = 0;
  *(undefined4 *)(__dest + 0x4d0) = 1;
  *(undefined4 *)(__dest + 0x4d4) = 0;
  Mutex::enterCriticalSection();
  if (param_7) {
    ppcVar3 = *(char ***)(this + 0x28);
    if (ppcVar3 != *(char ***)(this + 0x30)) {
      *ppcVar3 = __dest;
      *(char ***)(this + 0x28) = ppcVar3 + 1;
      goto LAB_00943740;
    }
    __src = *(void **)(this + 0x20);
    uVar6 = (long)ppcVar3 - (long)__src;
    uVar2 = ((long)uVar6 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) {
LAB_00943770:
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar2 <= (ulong)((long)uVar6 >> 2)) {
      uVar2 = (long)uVar6 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) {
LAB_00943774:
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar5 = operator_new(uVar2 << 3);
    }
    ppcVar3 = (char **)((long)pvVar5 + ((long)uVar6 >> 3) * 8);
    *ppcVar3 = __dest;
    if (0 < (long)uVar6) {
      memcpy(pvVar5,__src,uVar6);
    }
    *(void **)(this + 0x20) = pvVar5;
    *(char ***)(this + 0x28) = ppcVar3 + 1;
    *(void **)(this + 0x30) = (void *)((long)pvVar5 + uVar2 * 8);
  }
  else {
    ppcVar3 = *(char ***)(this + 0x10);
    if (ppcVar3 != *(char ***)(this + 0x18)) {
      *ppcVar3 = __dest;
      *(char ***)(this + 0x10) = ppcVar3 + 1;
      goto LAB_00943740;
    }
    __src = *(void **)(this + 8);
    uVar6 = (long)ppcVar3 - (long)__src;
    uVar2 = ((long)uVar6 >> 3) + 1;
    if (uVar2 >> 0x3d != 0) goto LAB_00943770;
    if (uVar2 <= (ulong)((long)uVar6 >> 2)) {
      uVar2 = (long)uVar6 >> 2;
    }
    if (0x7ffffffffffffff7 < uVar6) {
      uVar2 = 0x1fffffffffffffff;
    }
    if (uVar2 == 0) {
      pvVar5 = (void *)0x0;
    }
    else {
      if (uVar2 >> 0x3d != 0) goto LAB_00943774;
      pvVar5 = operator_new(uVar2 << 3);
    }
    ppcVar3 = (char **)((long)pvVar5 + ((long)uVar6 >> 3) * 8);
    *ppcVar3 = __dest;
    if (0 < (long)uVar6) {
      memcpy(pvVar5,__src,uVar6);
    }
    *(void **)(this + 8) = pvVar5;
    *(char ***)(this + 0x10) = ppcVar3 + 1;
    *(void **)(this + 0x18) = (void *)((long)pvVar5 + uVar2 * 8);
  }
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
LAB_00943740:
  Mutex::leaveCriticalSection();
  Event::post();
  return *(undefined4 *)(__dest + 0x4c8);
}


