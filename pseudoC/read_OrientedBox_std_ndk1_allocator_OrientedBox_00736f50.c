// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: read<OrientedBox,std::__ndk1::allocator<OrientedBox>>
// Entry Point: 00736f50
// Size: 280 bytes
// Signature: bool __cdecl read<OrientedBox,std::__ndk1::allocator<OrientedBox>>(File * param_1, vector * param_2)


/* bool SerializationUtil::read<OrientedBox, std::__ndk1::allocator<OrientedBox> >(File&,
   std::__ndk1::vector<OrientedBox, std::__ndk1::allocator<OrientedBox> >&) */

bool SerializationUtil::read<OrientedBox,std::__ndk1::allocator<OrientedBox>>
               (File *param_1,vector *param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint local_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,&local_4c,4);
  if (iVar4 == 4) {
    lVar1 = *(long *)param_2;
    lVar8 = *(long *)(param_2 + 8);
    lVar6 = lVar8 - lVar1 >> 2;
    uVar5 = (ulong)local_4c;
    uVar7 = lVar6 * 0x6db6db6db6db6db7;
    if (uVar5 <= uVar7) {
      if (uVar5 <= uVar7 && uVar7 - uVar5 != 0) {
        lVar8 = lVar1 + uVar5 * 0x1c;
        *(long *)(param_2 + 8) = lVar8;
      }
    }
    else {
      std::__ndk1::vector<OrientedBox,std::__ndk1::allocator<OrientedBox>>::__append
                ((vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> *)param_2,
                 uVar5 + lVar6 * -0x6db6db6db6db6db7);
      lVar1 = *(long *)param_2;
      lVar8 = *(long *)(param_2 + 8);
    }
    while ((lVar6 = lVar8, lVar1 != lVar8 &&
           (iVar4 = (**(code **)(*(long *)param_1 + 0x28))(param_1,lVar1,0x1c), lVar6 = lVar1,
           iVar4 == 0x1c))) {
      lVar1 = lVar1 + 0x1c;
    }
    bVar3 = lVar6 == lVar8;
  }
  else {
    bVar3 = false;
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar3;
}


