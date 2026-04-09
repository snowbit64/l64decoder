// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Print
// Entry Point: 00d53414
// Size: 2160 bytes
// Signature: undefined Print(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* HACD::TMMesh::Print() */

void HACD::TMMesh::Print(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  long in_x0;
  basic_ostream *pbVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  double *pdVar12;
  id aiStack_70 [8];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar11 = *(ulong *)(in_x0 + 0x18);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&std::__ndk1::cout,"-----------------------------",0x1d);
  std::__ndk1::ios_base::getloc();
  plVar8 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
  (**(code **)(*plVar8 + 0x38))(plVar8,10);
  std::__ndk1::locale::~locale((locale *)aiStack_70);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar7);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&std::__ndk1::cout,"vertices (",10);
  pbVar7 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,uVar11);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,")",1);
  std::__ndk1::ios_base::getloc();
  plVar8 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
  (**(code **)(*plVar8 + 0x38))(plVar8,10);
  std::__ndk1::locale::~locale((locale *)aiStack_70);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar7);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    pdVar12 = *(double **)(in_x0 + 0x10);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&std::__ndk1::cout,
                        (ulong)pdVar12[4]);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,", ",2);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,*pdVar12);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,", ",2);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,pdVar12[1]);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,", ",2);
    cVar6 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                      ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,pdVar12[2]);
    std::__ndk1::ios_base::getloc();
    plVar8 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar8 + 0x38))(plVar8,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar6);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    if (*(long *)(in_x0 + 0x18) != 0) {
      *(undefined8 *)(in_x0 + 0x10) = *(undefined8 *)(*(long *)(in_x0 + 0x10) + 0x38);
    }
  }
  uVar11 = *(ulong *)(in_x0 + 0x38);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&std::__ndk1::cout,"edges (",7);
  pbVar7 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,uVar11);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,")",1);
  std::__ndk1::ios_base::getloc();
  plVar8 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
  (**(code **)(*plVar8 + 0x38))(plVar8,10);
  std::__ndk1::locale::~locale((locale *)aiStack_70);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar7);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    lVar9 = *(long *)(in_x0 + 0x30);
    lVar1 = *(long *)(lVar9 + 0x18);
    lVar3 = *(long *)(lVar9 + 0x20);
    lVar2 = *(long *)(lVar9 + 8);
    lVar9 = *(long *)(lVar9 + 0x10);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&std::__ndk1::cout,"-> (",4);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                        *(long *)(lVar1 + 0x18));
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,", ",2);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                        *(long *)(lVar3 + 0x18));
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,")",1);
    std::__ndk1::ios_base::getloc();
    plVar8 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar8 + 0x38))(plVar8,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar7);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&std::__ndk1::cout,"-> F0 (",7);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                        *(long *)(*(long *)(lVar2 + 0x20) + 0x18));
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,", ",2);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                        *(long *)(*(long *)(lVar2 + 0x28) + 0x18));
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,", ",2);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                        *(long *)(*(long *)(lVar2 + 0x30) + 0x18));
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,")",1);
    std::__ndk1::ios_base::getloc();
    plVar8 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar8 + 0x38))(plVar8,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar7);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&std::__ndk1::cout,"-> F1 (",7);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                        *(long *)(*(long *)(lVar9 + 0x20) + 0x18));
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,", ",2);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                        *(long *)(*(long *)(lVar9 + 0x28) + 0x18));
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,", ",2);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                        *(long *)(*(long *)(lVar9 + 0x30) + 0x18));
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,")",1);
    std::__ndk1::ios_base::getloc();
    plVar8 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar8 + 0x38))(plVar8,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar7);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    if (*(long *)(in_x0 + 0x38) != 0) {
      *(undefined8 *)(in_x0 + 0x30) = *(undefined8 *)(*(long *)(in_x0 + 0x30) + 0x30);
    }
  }
  uVar11 = *(ulong *)(in_x0 + 0x58);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&std::__ndk1::cout,"triangles (",0xb);
  pbVar7 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,uVar11);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,")",1);
  std::__ndk1::ios_base::getloc();
  plVar8 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
  (**(code **)(*plVar8 + 0x38))(plVar8,10);
  std::__ndk1::locale::~locale((locale *)aiStack_70);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar7);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  for (; uVar11 != 0; uVar11 = uVar11 - 1) {
    lVar10 = *(long *)(in_x0 + 0x50);
    lVar1 = *(long *)(lVar10 + 0x28);
    lVar9 = *(long *)(lVar10 + 0x30);
    lVar2 = *(long *)(lVar10 + 8);
    lVar4 = *(long *)(lVar10 + 0x10);
    lVar3 = *(long *)(lVar10 + 0x18);
    lVar10 = *(long *)(lVar10 + 0x20);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&std::__ndk1::cout,"-> (",4);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                        *(long *)(lVar10 + 0x18));
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,", ",2);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                        *(long *)(lVar1 + 0x18));
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,", ",2);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                        *(long *)(lVar9 + 0x18));
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,")",1);
    std::__ndk1::ios_base::getloc();
    plVar8 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar8 + 0x38))(plVar8,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar7);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&std::__ndk1::cout,"-> E0 (",7);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                        *(long *)(*(long *)(lVar2 + 0x18) + 0x18));
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,", ",2);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                        *(long *)(*(long *)(lVar2 + 0x20) + 0x18));
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,")",1);
    std::__ndk1::ios_base::getloc();
    plVar8 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar8 + 0x38))(plVar8,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar7);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&std::__ndk1::cout,"-> E1 (",7);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                        *(long *)(*(long *)(lVar4 + 0x18) + 0x18));
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,", ",2);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                        *(long *)(*(long *)(lVar4 + 0x20) + 0x18));
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,")",1);
    std::__ndk1::ios_base::getloc();
    plVar8 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar8 + 0x38))(plVar8,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar7);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&std::__ndk1::cout,"-> E2 (",7);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                        *(long *)(*(long *)(lVar3 + 0x18) + 0x18));
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,", ",2);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                        *(long *)(*(long *)(lVar3 + 0x20) + 0x18));
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar7,")",1);
    std::__ndk1::ios_base::getloc();
    plVar8 = (long *)std::__ndk1::locale::use_facet(aiStack_70);
    (**(code **)(*plVar8 + 0x38))(plVar8,10);
    std::__ndk1::locale::~locale((locale *)aiStack_70);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar7);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    if (*(long *)(in_x0 + 0x58) != 0) {
      *(undefined8 *)(in_x0 + 0x50) = *(undefined8 *)(*(long *)(in_x0 + 0x50) + 0xd8);
    }
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


