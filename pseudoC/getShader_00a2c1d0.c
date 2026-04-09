// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShader
// Entry Point: 00a2c1d0
// Size: 396 bytes
// Signature: undefined __thiscall getShader(MaterialShaderManager * this, MaterialShaderHash * param_1, uint param_2)


/* MaterialShaderManager::getShader(MaterialShaderHash const&, unsigned int) */

MaterialShaderManager * __thiscall
MaterialShaderManager::getShader
          (MaterialShaderManager *this,MaterialShaderHash *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  MaterialShaderManager **ppMVar4;
  MaterialShaderManager **ppMVar5;
  MaterialShaderManager **ppMVar6;
  MaterialShaderManager *pMVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  MaterialShaderManager *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  ppMVar5 = (MaterialShaderManager **)(this + 0x80);
  ppMVar6 = (MaterialShaderManager **)*ppMVar5;
  if (ppMVar6 != (MaterialShaderManager **)0x0) {
    pMVar7 = *(MaterialShaderManager **)param_1;
    ppMVar4 = ppMVar5;
    do {
      bVar3 = ppMVar6[5] < *(MaterialShaderManager **)(param_1 + 8);
      if (ppMVar6[4] != pMVar7) {
        bVar3 = ppMVar6[4] < pMVar7;
      }
      lVar1 = 8;
      if (!bVar3) {
        lVar1 = 0;
        ppMVar4 = ppMVar6;
      }
      ppMVar6 = *(MaterialShaderManager ***)((long)ppMVar6 + lVar1);
    } while (ppMVar6 != (MaterialShaderManager **)0x0);
    if (ppMVar4 != ppMVar5) {
      bVar3 = ppMVar4[5] <= *(MaterialShaderManager **)(param_1 + 8);
      if (pMVar7 != ppMVar4[4]) {
        bVar3 = ppMVar4[4] <= pMVar7;
      }
      if (bVar3) {
        pMVar7 = ppMVar4[6];
        goto LAB_00a2c32c;
      }
    }
  }
  Mutex::enterCriticalSection();
  ppMVar5 = (MaterialShaderManager **)(this + 0x98);
  ppMVar6 = (MaterialShaderManager **)*ppMVar5;
  if (ppMVar6 == (MaterialShaderManager **)0x0) {
LAB_00a2c2f4:
    pMVar7 = (MaterialShaderManager *)getShaderNonInline(this,param_1,param_2);
    uStack_58 = *(undefined8 *)(param_1 + 8);
    local_60 = *(undefined8 *)param_1;
    local_50 = pMVar7;
    std::__ndk1::
    __tree<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::__map_value_compare<MaterialShaderHash,std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::less<MaterialShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>>>
    ::
    __emplace_unique_key_args<MaterialShaderHash,std::__ndk1::pair<MaterialShaderHash,MaterialShader*>>
              ((__tree<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::__map_value_compare<MaterialShaderHash,std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>,std::__ndk1::less<MaterialShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<MaterialShaderHash,MaterialShader*>>>
                *)(this + 0x90),(MaterialShaderHash *)&local_60,(pair *)&local_60);
  }
  else {
    pMVar7 = *(MaterialShaderManager **)param_1;
    ppMVar4 = ppMVar5;
    do {
      bVar3 = ppMVar6[5] < *(MaterialShaderManager **)(param_1 + 8);
      if (ppMVar6[4] != pMVar7) {
        bVar3 = ppMVar6[4] < pMVar7;
      }
      lVar1 = 8;
      if (!bVar3) {
        lVar1 = 0;
        ppMVar4 = ppMVar6;
      }
      ppMVar6 = *(MaterialShaderManager ***)((long)ppMVar6 + lVar1);
    } while (ppMVar6 != (MaterialShaderManager **)0x0);
    if (ppMVar4 == ppMVar5) goto LAB_00a2c2f4;
    bVar3 = ppMVar4[5] <= *(MaterialShaderManager **)(param_1 + 8);
    if (pMVar7 != ppMVar4[4]) {
      bVar3 = ppMVar4[4] <= pMVar7;
    }
    if (!bVar3) goto LAB_00a2c2f4;
    pMVar7 = ppMVar4[6];
  }
  Mutex::leaveCriticalSection();
LAB_00a2c32c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pMVar7;
}


