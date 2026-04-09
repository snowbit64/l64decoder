// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SaveOFF
// Entry Point: 00eb24b0
// Size: 1212 bytes
// Signature: undefined __thiscall SaveOFF(Mesh * this, basic_string * param_1)


/* VHACD::Mesh::SaveOFF(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

undefined4 __thiscall VHACD::Mesh::SaveOFF(Mesh *this,basic_string *param_1)

{
  Mesh *pMVar1;
  Mesh *pMVar2;
  byte bVar3;
  long lVar4;
  FILE *__stream;
  char cVar5;
  uint uVar6;
  uint uVar7;
  basic_ostream *pbVar8;
  long *plVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong uVar12;
  char *__filename;
  long lVar13;
  id aiStack_1c0 [8];
  undefined **local_1b8;
  long local_1b0 [15];
  FILE *local_138;
  undefined4 local_118;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  bVar3 = *(byte *)param_1;
  local_1b8 = (undefined **)0xfdb3c8;
  local_108[0] = (undefined **)0xfdb3f0;
  __filename = *(char **)(param_1 + 4);
  std::__ndk1::ios_base::init(local_108);
  local_80 = 0;
  local_78 = 0xffffffff;
  local_1b8 = &PTR__basic_ofstream_00fdb358;
  local_108[0] = &PTR__basic_ofstream_00fdb380;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::basic_filebuf();
  if (local_138 == (FILE *)0x0) {
    if ((bVar3 & 1) == 0) {
      __filename = (char *)((long)param_1 + 1);
    }
    local_138 = fopen(__filename,"we");
    if (local_138 == (FILE *)0x0) goto LAB_00eb254c;
    local_118 = 0x10;
  }
  else {
LAB_00eb254c:
    std::__ndk1::ios_base::clear((int)&local_1b8 + (int)local_1b8[-3]);
    if (local_138 == (FILE *)0x0) {
      uVar10 = 0;
      goto LAB_00eb28f8;
    }
  }
  uVar12 = *(ulong *)(this + 0x608);
  uVar11 = *(ulong *)(this + 0x920);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&local_1b8,"OFF",3);
  std::__ndk1::ios_base::getloc();
  plVar9 = (long *)std::__ndk1::locale::use_facet(aiStack_1c0);
  (**(code **)(*plVar9 + 0x38))(plVar9,10);
  std::__ndk1::locale::~locale((locale *)aiStack_1c0);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar8);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1b8,uVar12);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8," ",1);
  pbVar8 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,uVar11);
  pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar8," ",1);
  cVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                    ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,0);
  std::__ndk1::ios_base::getloc();
  plVar9 = (long *)std::__ndk1::locale::use_facet(aiStack_1c0);
  (**(code **)(*plVar9 + 0x38))(plVar9,10);
  std::__ndk1::locale::~locale((locale *)aiStack_1c0);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  if (uVar12 != 0) {
    lVar13 = 0;
    do {
      pMVar1 = this;
      if (*(long *)(this + 0x610) != 0x40) {
        pMVar1 = *(Mesh **)(this + 0x600);
      }
      pbVar8 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1b8,
                          *(double *)(pMVar1 + lVar13));
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8," ",1);
      pMVar1 = this;
      if (*(long *)(this + 0x610) != 0x40) {
        pMVar1 = *(Mesh **)(this + 0x600);
      }
      pbVar8 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                          *(double *)(pMVar1 + lVar13 + 8));
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8," ",1);
      pMVar1 = this;
      if (*(long *)(this + 0x610) != 0x40) {
        pMVar1 = *(Mesh **)(this + 0x600);
      }
      cVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                         *(double *)(pMVar1 + lVar13 + 0x10));
      std::__ndk1::ios_base::getloc();
      plVar9 = (long *)std::__ndk1::locale::use_facet(aiStack_1c0);
      (**(code **)(*plVar9 + 0x38))(plVar9,10);
      std::__ndk1::locale::~locale((locale *)aiStack_1c0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      uVar12 = uVar12 - 1;
      lVar13 = lVar13 + 0x18;
    } while (uVar12 != 0);
  }
  if (uVar11 != 0) {
    lVar13 = 0;
    pMVar1 = this + 0x618;
    do {
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         ((basic_ostream *)&local_1b8,"3 ",2);
      pMVar2 = pMVar1;
      if (*(long *)(this + 0x928) != 0x40) {
        pMVar2 = *(Mesh **)(this + 0x918);
      }
      pbVar8 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                          *(int *)(pMVar2 + lVar13));
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8," ",1);
      pMVar2 = pMVar1;
      if (*(long *)(this + 0x928) != 0x40) {
        pMVar2 = *(Mesh **)(this + 0x918);
      }
      pbVar8 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                          *(int *)(pMVar2 + lVar13 + 4));
      pbVar8 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar8," ",1);
      pMVar2 = pMVar1;
      if (*(long *)(this + 0x928) != 0x40) {
        pMVar2 = *(Mesh **)(this + 0x918);
      }
      cVar5 = std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                        ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar8,
                         *(int *)(pMVar2 + lVar13 + 8));
      std::__ndk1::ios_base::getloc();
      plVar9 = (long *)std::__ndk1::locale::use_facet(aiStack_1c0);
      (**(code **)(*plVar9 + 0x38))(plVar9,10);
      std::__ndk1::locale::~locale((locale *)aiStack_1c0);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put(cVar5);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
      uVar11 = uVar11 - 1;
      lVar13 = lVar13 + 0xc;
    } while (uVar11 != 0);
  }
  __stream = local_138;
  if (local_138 == (FILE *)0x0) {
LAB_00eb28cc:
    std::__ndk1::ios_base::clear((int)&local_1b8 + (int)local_1b8[-3]);
  }
  else {
    uVar6 = (**(code **)(local_1b0[0] + 0x30))(local_1b0);
    uVar7 = fclose(__stream);
    local_138 = (FILE *)0x0;
    (**(code **)(local_1b0[0] + 0x18))(local_1b0,0,0);
    if ((uVar7 | uVar6) != 0) goto LAB_00eb28cc;
  }
  uVar10 = 1;
LAB_00eb28f8:
  local_1b8 = &PTR__basic_ofstream_00fdb358;
  local_108[0] = &PTR__basic_ofstream_00fdb380;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)local_1b0);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1b8);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_108);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


