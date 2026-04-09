// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __append
// Entry Point: 00b4249c
// Size: 532 bytes
// Signature: undefined __thiscall __append(vector<MasterServerManager::RELAY_SERVER_PING_REQUEST_SESSION,std::__ndk1::allocator<MasterServerManager::RELAY_SERVER_PING_REQUEST_SESSION>> * this, ulong param_1)


/* std::__ndk1::vector<MasterServerManager::RELAY_SERVER_PING_REQUEST_SESSION,
   std::__ndk1::allocator<MasterServerManager::RELAY_SERVER_PING_REQUEST_SESSION>
   >::__append(unsigned long) */

void __thiscall
std::__ndk1::
vector<MasterServerManager::RELAY_SERVER_PING_REQUEST_SESSION,std::__ndk1::allocator<MasterServerManager::RELAY_SERVER_PING_REQUEST_SESSION>>
::__append(vector<MasterServerManager::RELAY_SERVER_PING_REQUEST_SESSION,std::__ndk1::allocator<MasterServerManager::RELAY_SERVER_PING_REQUEST_SESSION>>
           *this,ulong param_1)

{
  size_t sVar1;
  ulong uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  void *__s;
  void *pvVar9;
  void *pvVar10;
  
  __s = *(void **)(this + 8);
  if ((ulong)((*(long *)(this + 0x10) - (long)__s >> 3) * -0x3333333333333333) < param_1) {
    pvVar10 = *(void **)this;
    lVar6 = (long)__s - (long)pvVar10 >> 3;
    uVar2 = lVar6 * -0x3333333333333333 + param_1;
    if (0x666666666666666 < uVar2) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
    lVar4 = *(long *)(this + 0x10) - (long)pvVar10 >> 3;
    uVar7 = lVar4 * -0x6666666666666666;
    if (uVar2 <= uVar7) {
      uVar2 = uVar7;
    }
    if (0x333333333333332 < (ulong)(lVar4 * -0x3333333333333333)) {
      uVar2 = 0x666666666666666;
    }
    if (uVar2 == 0) {
      pvVar3 = (void *)0x0;
    }
    else {
      if (0x666666666666666 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
      }
      pvVar3 = operator_new(uVar2 * 0x28);
    }
    pvVar9 = (void *)((long)pvVar3 + lVar6 * 8);
    pvVar3 = (void *)((long)pvVar3 + uVar2 * 0x28);
    sVar1 = ((param_1 * 0x28 - 0x28) / 0x28) * 0x28 + 0x28;
    memset(pvVar9,0,sVar1);
    lVar6 = (long)pvVar9 + sVar1;
    if (__s == pvVar10) {
      *(void **)this = pvVar9;
      *(long *)(this + 8) = lVar6;
      *(void **)(this + 0x10) = pvVar3;
    }
    else {
      lVar4 = 0;
      do {
        lVar5 = lVar4 + -0x28;
        uVar8 = *(undefined8 *)((long)__s + lVar4 + -0x28);
        *(undefined8 *)((long)pvVar9 + lVar4 + -0x18) = 0;
        *(undefined8 *)((long)pvVar9 + lVar4 + -0x10) = 0;
        *(undefined8 *)((long)pvVar9 + lVar4 + -0x28) = uVar8;
        uVar8 = *(undefined8 *)((long)__s + lVar4 + -0x18);
        *(undefined8 *)((long)pvVar9 + lVar4 + -0x20) = *(undefined8 *)((long)__s + lVar4 + -0x20);
        *(undefined8 *)((long)pvVar9 + lVar4 + -0x18) = uVar8;
        *(undefined8 *)((long)pvVar9 + lVar4 + -0x10) = *(undefined8 *)((long)__s + lVar4 + -0x10);
        *(undefined8 *)((long)__s + lVar4 + -0x20) = 0;
        *(undefined8 *)((long)__s + lVar4 + -0x18) = 0;
        *(undefined8 *)((long)__s + lVar4 + -0x10) = 0;
        *(undefined4 *)((long)pvVar9 + lVar4 + -8) = *(undefined4 *)((long)__s + lVar4 + -8);
        lVar4 = lVar5;
      } while ((void *)((long)__s + lVar5) != pvVar10);
      *(void **)(this + 0x10) = pvVar3;
      __s = *(void **)this;
      pvVar10 = *(void **)(this + 8);
      *(long *)this = (long)pvVar9 + lVar5;
      *(long *)(this + 8) = lVar6;
      while (pvVar3 = pvVar10, pvVar3 != __s) {
        pvVar9 = *(void **)((long)pvVar3 + -0x20);
        pvVar10 = (void *)((long)pvVar3 + -0x28);
        if (pvVar9 != (void *)0x0) {
          *(void **)((long)pvVar3 + -0x18) = pvVar9;
          operator_delete(pvVar9);
        }
      }
    }
    if (__s != (void *)0x0) {
      operator_delete(__s);
      return;
    }
  }
  else {
    if (param_1 != 0) {
      sVar1 = ((param_1 * 0x28 - 0x28) / 0x28) * 0x28 + 0x28;
      memset(__s,0,sVar1);
      __s = (void *)((long)__s + sVar1);
    }
    *(void **)(this + 8) = __s;
  }
  return;
}


