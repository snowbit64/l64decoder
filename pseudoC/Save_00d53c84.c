// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Save
// Entry Point: 00d53c84
// Size: 620 bytes
// Signature: undefined __thiscall Save(TMMesh * this, char * param_1)


/* HACD::TMMesh::Save(char const*) */

undefined8 __thiscall HACD::TMMesh::Save(TMMesh *this,char *param_1)

{
  long lVar1;
  FILE *__stream;
  uint uVar2;
  uint uVar3;
  basic_ostream *pbVar4;
  size_t sVar5;
  long *plVar6;
  undefined auVar7 [16];
  undefined **local_208;
  long local_200 [15];
  FILE *local_188;
  undefined4 local_168;
  undefined **local_158 [17];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_208 = (undefined **)0xfdb3c8;
  local_158[0] = (undefined **)0xfdb3f0;
  std::__ndk1::ios_base::init(local_158);
  local_d0 = 0;
  local_c8 = 0xffffffff;
  local_208 = &PTR__basic_ofstream_00fdb358;
  local_158[0] = &PTR__basic_ofstream_00fdb380;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::basic_filebuf();
  if (local_188 == (FILE *)0x0) {
    local_188 = fopen(param_1,"we");
    if (local_188 == (FILE *)0x0) goto LAB_00d53d18;
    local_168 = 0x10;
  }
  else {
LAB_00d53d18:
    std::__ndk1::ios_base::clear((int)&local_208 + (int)local_208[-3]);
  }
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     ((basic_ostream *)&std::__ndk1::cout,"Saving ",7);
  sVar5 = strlen(param_1);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,param_1,sVar5);
  std::__ndk1::ios_base::getloc();
  plVar6 = (long *)std::__ndk1::locale::use_facet((id *)&local_c0);
  (**(code **)(*plVar6 + 0x38))(plVar6,10);
  std::__ndk1::locale::~locale((locale *)&local_c0);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar4);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
  auVar7 = NEON_fmov(0x3fe0000000000000,8);
  local_90 = 0x3fe0000000000000;
  uStack_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_b8 = auVar7._8_8_;
  local_c0 = auVar7._0_8_;
  uStack_a8 = 0x3fd999999999999a;
  local_b0 = 0x3fe0000000000000;
  uStack_68 = 0;
  local_70 = 0x3fd999999999999a;
  uStack_a0 = local_c0;
  uStack_98 = uStack_b8;
  SaveVRML2(this,(basic_ofstream *)&local_208,(Material *)&local_c0);
  __stream = local_188;
  if (local_188 != (FILE *)0x0) {
    uVar2 = (**(code **)(local_200[0] + 0x30))(local_200);
    uVar3 = fclose(__stream);
    local_188 = (FILE *)0x0;
    (**(code **)(local_200[0] + 0x18))(local_200,0,0);
    if ((uVar3 | uVar2) == 0) goto LAB_00d53e80;
  }
  std::__ndk1::ios_base::clear((int)&local_208 + (int)local_208[-3]);
LAB_00d53e80:
  local_208 = &PTR__basic_ofstream_00fdb358;
  local_158[0] = &PTR__basic_ofstream_00fdb380;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)local_200);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_208);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_158);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


