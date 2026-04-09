// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Save
// Entry Point: 00d4bbf8
// Size: 920 bytes
// Signature: undefined __thiscall Save(HACD * this, char * param_1, bool param_2, long param_3)


/* HACD::HACD::Save(char const*, bool, long) const */

undefined4 __thiscall HACD::HACD::Save(HACD *this,char *param_1,bool param_2,long param_3)

{
  long lVar1;
  FILE *__stream;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 extraout_x1;
  long lVar5;
  undefined4 uVar6;
  long lVar7;
  double local_5c0;
  double local_5b8;
  double local_5b0;
  undefined **local_1c0;
  long local_1b8 [15];
  FILE *local_140;
  undefined4 local_120;
  undefined **local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_1c0 = (undefined **)0xfdb3c8;
  local_110[0] = (undefined **)0xfdb3f0;
  std::__ndk1::ios_base::init(local_110);
  local_88 = 0;
  local_80 = 0xffffffff;
  local_1c0 = &PTR__basic_ofstream_00fdb358;
  local_110[0] = &PTR__basic_ofstream_00fdb380;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::basic_filebuf();
  if ((local_140 == (FILE *)0x0) && (local_140 = fopen(param_1,"we"), local_140 != (FILE *)0x0)) {
    local_120 = 0x10;
    lVar5 = *(long *)(this + 0x178);
  }
  else {
    std::__ndk1::ios_base::clear((int)&local_1c0 + (int)local_1c0[-3]);
    if (local_140 == (FILE *)0x0) {
      if (*(long *)(this + 0x178) != 0) {
        FUN_00d47538(&local_5c0,extraout_x1,"Error saving %s\n",param_1);
        (**(code **)(this + 0x178))(0,0,&local_5c0,*(undefined8 *)(this + 0x110));
      }
      uVar6 = 0;
      goto LAB_00d4bf18;
    }
    lVar5 = *(long *)(this + 0x178);
  }
  if (lVar5 != 0) {
    FUN_00d47538(&local_5c0);
    (**(code **)(this + 0x178))(0,0,&local_5c0,*(undefined8 *)(this + 0x110));
  }
  Material::Material((Material *)&local_5c0);
  if (param_3 < 0) {
    if (*(long *)(this + 0x68) != 0) {
      lVar5 = 0;
      if (param_2) {
        lVar7 = 8;
        do {
          TMMesh::SaveVRML2((TMMesh *)(*(long *)(this + 0xf8) + lVar7),(basic_ofstream *)&local_1c0,
                            (Material *)&local_5c0);
          lVar5 = lVar5 + 1;
          lVar7 = lVar7 + 0x110;
        } while (lVar5 != *(long *)(this + 0x68));
      }
      else {
        do {
          local_5c0 = 0.0;
          local_5b8 = 0.0;
          local_5b0 = 0.0;
          while (((local_5c0 == local_5b8 || (local_5b0 == local_5b8)) || (local_5b0 == local_5c0)))
          {
            iVar2 = rand();
            local_5c0 = (double)(iVar2 % 100) / 100.0;
            iVar2 = rand();
            local_5b8 = (double)(iVar2 % 100) / 100.0;
            iVar2 = rand();
            local_5b0 = (double)(iVar2 % 100) / 100.0;
          }
          TMMesh::SaveVRML2((TMMesh *)(*(long *)(this + 0xf8) + lVar5 * 0x110 + 8),
                            (basic_ofstream *)&local_1c0,(Material *)&local_5c0);
          lVar5 = lVar5 + 1;
        } while (lVar5 != *(long *)(this + 0x68));
      }
    }
  }
  else if (param_3 < *(long *)(this + 0xe8) - *(long *)(this + 0xe0) >> 3) {
    TMMesh::SaveVRML2((TMMesh *)(*(long *)(this + 0xf8) + param_3 * 0x110 + 8),
                      (basic_ofstream *)&local_1c0,(Material *)&local_5c0);
  }
  __stream = local_140;
  if (local_140 == (FILE *)0x0) {
LAB_00d4bef8:
    std::__ndk1::ios_base::clear((int)&local_1c0 + (int)local_1c0[-3]);
  }
  else {
    uVar3 = (**(code **)(local_1b8[0] + 0x30))(local_1b8);
    uVar4 = fclose(__stream);
    local_140 = (FILE *)0x0;
    (**(code **)(local_1b8[0] + 0x18))(local_1b8,0,0);
    if ((uVar4 | uVar3) != 0) goto LAB_00d4bef8;
  }
  uVar6 = 1;
LAB_00d4bf18:
  local_1c0 = &PTR__basic_ofstream_00fdb358;
  local_110[0] = &PTR__basic_ofstream_00fdb380;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf
            ((basic_filebuf<char,std::__ndk1::char_traits<char>> *)local_1b8);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_1c0);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_110);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


