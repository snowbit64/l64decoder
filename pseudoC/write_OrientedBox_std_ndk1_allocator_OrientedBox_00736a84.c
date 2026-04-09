// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: write<OrientedBox,std::__ndk1::allocator<OrientedBox>>
// Entry Point: 00736a84
// Size: 212 bytes
// Signature: bool __cdecl write<OrientedBox,std::__ndk1::allocator<OrientedBox>>(File * param_1, vector * param_2)


/* bool SerializationUtil::write<OrientedBox, std::__ndk1::allocator<OrientedBox> >(File&,
   std::__ndk1::vector<OrientedBox, std::__ndk1::allocator<OrientedBox> > const&) */

bool SerializationUtil::write<OrientedBox,std::__ndk1::allocator<OrientedBox>>
               (File *param_1,vector *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  int local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_3c = (int)((ulong)(*(long *)(param_2 + 8) - *(long *)param_2) >> 2) * -0x49249249;
  iVar5 = (**(code **)(*(long *)param_1 + 0x30))(param_1,&local_3c,4);
  if (iVar5 == 4) {
    lVar1 = *(long *)param_2;
    lVar2 = *(long *)(param_2 + 8);
    lVar6 = lVar1;
    while ((lVar1 != lVar2 &&
           (iVar5 = (**(code **)(*(long *)param_1 + 0x30))(param_1,lVar1,0x1c), lVar6 = lVar1,
           iVar5 == 0x1c))) {
      lVar1 = lVar1 + 0x1c;
      lVar6 = lVar2;
    }
    bVar4 = lVar6 == lVar2;
  }
  else {
    bVar4 = false;
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


