// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: read<StoppingPath,std::__ndk1::allocator<StoppingPath>>
// Entry Point: 00725d14
// Size: 312 bytes
// Signature: bool __cdecl read<StoppingPath,std::__ndk1::allocator<StoppingPath>>(File * param_1, vector * param_2)


/* bool SerializationUtil::read<StoppingPath, std::__ndk1::allocator<StoppingPath> >(File&,
   std::__ndk1::vector<StoppingPath, std::__ndk1::allocator<StoppingPath> >&) */

bool SerializationUtil::read<StoppingPath,std::__ndk1::allocator<StoppingPath>>
               (File *param_1,vector *param_2)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  void **ppvVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  void **ppvVar9;
  void **ppvVar10;
  uint local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar3 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_4c,4);
  if (iVar3 == 4) {
    ppvVar10 = *(void ***)(param_2 + 8);
    lVar7 = (long)ppvVar10 - *(long *)param_2 >> 3;
    uVar6 = (ulong)local_4c;
    uVar8 = lVar7 * -0x3333333333333333;
    if (uVar6 <= uVar8) {
      if (uVar6 <= uVar8 && uVar8 - uVar6 != 0) {
        ppvVar5 = (void **)(*(long *)param_2 + uVar6 * 0x28);
        while (ppvVar9 = ppvVar10, ppvVar9 != ppvVar5) {
          ppvVar10 = ppvVar9 + -5;
          pvVar4 = *ppvVar10;
          if (pvVar4 != (void *)0x0) {
            ppvVar9[-4] = pvVar4;
            operator_delete(pvVar4);
          }
        }
        *(void ***)(param_2 + 8) = ppvVar5;
        ppvVar10 = ppvVar5;
      }
    }
    else {
      std::__ndk1::vector<StoppingPath,std::__ndk1::allocator<StoppingPath>>::__append
                ((vector<StoppingPath,std::__ndk1::allocator<StoppingPath>> *)param_2,
                 uVar6 + lVar7 * 0x3333333333333333);
      ppvVar10 = *(void ***)(param_2 + 8);
    }
    ppvVar5 = *(void ***)param_2;
    while ((ppvVar9 = ppvVar10, ppvVar5 != ppvVar10 &&
           (uVar6 = StoppingPath::deserialize((StoppingPath *)ppvVar5,param_1), ppvVar9 = ppvVar5,
           (uVar6 & 1) != 0))) {
      ppvVar5 = ppvVar5 + 5;
    }
    bVar2 = ppvVar9 == ppvVar10;
  }
  else {
    bVar2 = false;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar2;
}


