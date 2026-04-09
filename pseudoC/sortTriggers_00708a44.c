// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: sortTriggers
// Entry Point: 00708a44
// Size: 340 bytes
// Signature: undefined sortTriggers(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalAnimationSystemSource::sortTriggers() */

void AnimalAnimationSystemSource::sortTriggers(void)

{
  long lVar1;
  bool bVar2;
  long in_x0;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  float *pfVar7;
  byte local_88;
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar3 = *(int *)(in_x0 + 0x2918);
  if (1 < iVar3) {
    uVar5 = 0;
    while (0 < (int)(iVar3 + ~uVar5)) {
      lVar6 = 0;
      bVar2 = false;
      pfVar7 = (float *)(in_x0 + 0x296c);
      do {
        if (*pfVar7 < pfVar7[-10]) {
          uVar4 = *(undefined8 *)(pfVar7 + -0x13);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string((basic_string *)&local_88);
          local_70 = *(undefined8 *)(pfVar7 + -0xb);
          *(undefined8 *)(pfVar7 + -0x13) = *(undefined8 *)(pfVar7 + -9);
                    /* try { // try from 00708b0c to 00708b33 has its CatchHandler @ 00708b98 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(pfVar7 + -0x11),(basic_string *)(pfVar7 + -7));
          *(undefined8 *)(pfVar7 + -0xb) = *(undefined8 *)(pfVar7 + -1);
          *(undefined8 *)(pfVar7 + -9) = uVar4;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::operator=
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(pfVar7 + -7),(basic_string *)&local_88);
          *(undefined8 *)(pfVar7 + -1) = local_70;
          if ((local_88 & 1) != 0) {
            operator_delete(local_78);
          }
          iVar3 = *(int *)(in_x0 + 0x2918);
          bVar2 = true;
        }
        lVar6 = lVar6 + 1;
        pfVar7 = pfVar7 + 10;
      } while (lVar6 < (int)(iVar3 + ~uVar5));
      if ((!bVar2) || (uVar5 = uVar5 + 1, iVar3 + -1 <= (int)uVar5)) break;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


