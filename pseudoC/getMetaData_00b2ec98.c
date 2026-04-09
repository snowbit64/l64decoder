// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getMetaData
// Entry Point: 00b2ec98
// Size: 532 bytes
// Signature: undefined __thiscall getMetaData(AndroidCloudDevice * this, Session * param_1, Operation * * param_2, void * param_3)


/* AndroidCloudDevice::getMetaData(ICloudDevice::Session*, ICloudDevice::Operation**, void*) */

void __thiscall
AndroidCloudDevice::getMetaData
          (AndroidCloudDevice *this,Session *param_1,Operation **param_2,void *param_3)

{
  int iVar1;
  int **ppiVar2;
  long lVar3;
  int **ppiVar4;
  long lVar5;
  size_t __n;
  long lVar6;
  int *piVar7;
  void *__dest;
  ulong uVar8;
  int *piVar9;
  int iVar10;
  void *pvVar11;
  ulong __n_00;
  void *local_80;
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  piVar7 = (int *)operator_new(0x18);
  *(Session **)(piVar7 + 2) = param_1;
  *(void **)(piVar7 + 4) = param_3;
  iVar10 = AndroidOperation::s_nextId;
  ppiVar2 = *(int ***)(this + 0x28);
  ppiVar4 = *(int ***)(this + 0x30);
  iVar1 = AndroidOperation::s_nextId + 1;
  *piVar7 = AndroidOperation::s_nextId;
  AndroidOperation::s_nextId = iVar1;
  if (ppiVar2 == ppiVar4) {
    pvVar11 = *(void **)(this + 0x20);
    __n_00 = (long)ppiVar2 - (long)pvVar11;
    uVar8 = ((long)__n_00 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    if (uVar8 <= (ulong)((long)__n_00 >> 2)) {
      uVar8 = (long)__n_00 >> 2;
    }
    if (0x7ffffffffffffff7 < __n_00) {
      uVar8 = 0x1fffffffffffffff;
    }
    if (uVar8 == 0) {
      __dest = (void *)0x0;
    }
    else {
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      __dest = operator_new(uVar8 << 3);
    }
    ppiVar2 = (int **)((long)__dest + ((long)__n_00 >> 3) * 8);
    *ppiVar2 = piVar7;
    if (0 < (long)__n_00) {
      memcpy(__dest,pvVar11,__n_00);
    }
    *(void **)(this + 0x20) = __dest;
    *(int ***)(this + 0x28) = ppiVar2 + 1;
    *(void **)(this + 0x30) = (void *)((long)__dest + uVar8 * 8);
    if (pvVar11 != (void *)0x0) {
      operator_delete(pvVar11);
      iVar10 = *piVar7;
    }
  }
  else {
    *ppiVar2 = piVar7;
    *(int ***)(this + 0x28) = ppiVar2 + 1;
  }
  *param_2 = (Operation *)piVar7;
  uVar8 = AndroidJNICall::callBoolFromIntInt
                    (*(AndroidJNICall **)(this + 0x38),"getMetaData",*(int *)(param_1 + 0x20),iVar10
                    );
  if ((uVar8 & 1) == 0) {
    lVar3 = *(long *)(this + 0x20);
    local_80 = (void *)0x0;
    local_78 = (void *)0x0;
    local_70 = 0;
    lVar5 = *(long *)(this + 0x28) - lVar3;
    if (lVar5 != 0) {
      uVar8 = 0;
      do {
        piVar9 = *(int **)(lVar3 + uVar8 * 8);
        if (*piVar9 == *piVar7) {
          pvVar11 = (void *)(lVar3 + uVar8 * 8);
          __n = *(long *)(this + 0x28) - (long)(void *)((long)pvVar11 + 8);
          if (__n != 0) {
            memmove(pvVar11,(void *)((long)pvVar11 + 8),__n);
          }
          *(size_t *)(this + 0x28) = (long)pvVar11 + __n;
                    /* try { // try from 00b2ee44 to 00b2ee4f has its CatchHandler @ 00b2eeac */
          (**(code **)(**(long **)(*(long *)(piVar9 + 2) + 0x18) + 0x10))
                    (*(long **)(*(long *)(piVar9 + 2) + 0x18),&local_80,1,
                     *(undefined8 *)(piVar9 + 4));
          operator_delete(piVar9);
          if (local_80 != (void *)0x0) {
            local_78 = local_80;
            operator_delete(local_80);
          }
          break;
        }
        uVar8 = (ulong)((int)uVar8 + 1);
      } while (uVar8 < (ulong)(lVar5 >> 3));
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


