// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VoxelizeMesh
// Entry Point: 00eaa87c
// Size: 1740 bytes
// Signature: undefined __thiscall VoxelizeMesh(VHACD * this, double * param_1, uint param_2, int * param_3, uint param_4, Parameters * param_5)


/* VHACD::VHACD::VoxelizeMesh(double const*, unsigned int, int const*, unsigned int,
   VHACD::IVHACD::Parameters const&) */

void __thiscall
VHACD::VHACD::VoxelizeMesh
          (VHACD *this,double *param_1,uint param_2,int *param_3,uint param_4,Parameters *param_5)

{
  void *pvVar1;
  long lVar2;
  VHACD VVar3;
  long lVar4;
  basic_ostream *pbVar5;
  long *plVar6;
  size_t __n;
  long lVar7;
  VHACD *pVVar8;
  ulong uVar9;
  VHACD *pVVar10;
  Volume *pVVar11;
  undefined *puVar12;
  double dVar13;
  undefined8 local_390;
  size_t sStack_388;
  undefined *local_380;
  undefined **local_378;
  undefined **local_370 [8];
  ulong local_330;
  undefined8 uStack_328;
  void *local_320;
  undefined8 uStack_318;
  undefined4 local_310;
  undefined **local_308 [17];
  undefined8 local_280;
  undefined4 local_278;
  basic_string local_270 [4];
  void *local_260;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (((byte)this[0x2b8] & 1) != 0) goto LAB_00eaaf0c;
  clock_gettime(0,(timespec *)(this + 0x278));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x228));
  local_378 = (undefined **)0xfd8f40;
  local_308[0] = (undefined **)0xfd8f68;
  std::__ndk1::ios_base::init(local_308);
  local_280 = 0;
  local_278 = 0xffffffff;
  local_378 = &PTR__basic_ostringstream_00fd8ed0;
  local_308[0] = &PTR__basic_ostringstream_00fd8ef8;
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::basic_streambuf();
  local_310 = 0x10;
  uStack_328 = 0;
  local_330 = 0;
  uStack_318 = 0;
  local_320 = (void *)0x0;
  local_370[0] = &PTR__basic_stringbuf_00fd8fa0;
  if (*(long *)(param_5 + 0x28) != 0) {
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_378,"+ ",2);
    pVVar8 = *(VHACD **)(this + 0x238);
    uVar9 = *(ulong *)(this + 0x230);
    if (((byte)this[0x228] & 1) == 0) {
      pVVar8 = this + 0x229;
      uVar9 = (ulong)((byte)this[0x228] >> 1);
    }
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,(char *)pVVar8,uVar9);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet((id *)local_270);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)local_270);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    plVar6 = *(long **)(param_5 + 0x28);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pvVar1 = (void *)((ulong)local_270 | 1);
    if (((ushort)local_270[0] & 1) != 0) {
      pvVar1 = local_260;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6,pvVar1);
    if (((ushort)local_270[0] & 1) != 0) {
      operator_delete(local_260);
    }
  }
  pVVar11 = *(Volume **)(this + 0x2a8);
  if (pVVar11 != (Volume *)0x0) {
    Volume::~Volume(pVVar11);
    operator_delete(pVVar11);
  }
  *(undefined8 *)(this + 0x2a8) = 0;
  dVar13 = pow((double)(ulong)*(uint *)(param_5 + 0x40),0.33);
  uVar9 = (ulong)(dVar13 * 1.5);
  if (uVar9 < 0x21) {
    uVar9 = 0x20;
  }
  *(ulong *)(this + 0x298) = uVar9;
  FUN_00eaaf48(local_270);
  __n = strlen((char *)local_270);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    puVar12 = (undefined *)((ulong)&local_390 | 1);
    local_390 = CONCAT71(local_390._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_00eaacdc;
    *puVar12 = 0;
    VVar3 = this[0x240];
  }
  else {
    uVar9 = __n + 0x10 & 0xfffffffffffffff0;
    puVar12 = (undefined *)operator_new(uVar9);
    local_390 = uVar9 | 1;
    sStack_388 = __n;
    local_380 = puVar12;
LAB_00eaacdc:
    memcpy(puVar12,local_270,__n);
    puVar12[__n] = 0;
    VVar3 = this[0x240];
  }
  if (((byte)VVar3 & 1) != 0) {
    operator_delete(*(void **)(this + 0x250));
  }
  *(size_t *)(this + 0x248) = sStack_388;
  *(ulong *)(this + 0x240) = local_390;
  *(undefined **)(this + 0x250) = local_380;
  if (((byte)this[0x2b8] & 1) == 0) {
    *(undefined8 *)(this + 0x268) = 0;
    *(undefined8 *)(this + 0x260) = 0;
    plVar6 = *(long **)(param_5 + 0x20);
    if (plVar6 != (long *)0x0) {
      pVVar8 = *(VHACD **)(this + 0x238);
      pVVar10 = *(VHACD **)(this + 0x250);
      if (((byte)this[0x228] & 1) == 0) {
        pVVar8 = this + 0x229;
      }
      if (((byte)this[0x240] & 1) == 0) {
        pVVar10 = this + 0x241;
      }
      (**(code **)(*plVar6 + 0x10))(*(undefined8 *)(this + 600),0,0,plVar6,pVVar8,pVVar10);
    }
  }
  pVVar11 = (Volume *)operator_new(0x78);
  Volume::Volume(pVVar11,param_5);
  *(Volume **)(this + 0x2a8) = pVVar11;
  Volume::Voxelize(pVVar11,param_1,param_2,param_3,param_4,*(ulong *)(this + 0x298),
                   *(FillMode *)(param_5 + 0x6c),*(RaycastMesh **)(this + 8));
  lVar7 = *(long *)(this + 0x2a8);
  if (*(long *)(param_5 + 0x28) != 0) {
    lVar2 = *(long *)(lVar7 + 0x58);
    lVar7 = *(long *)(lVar7 + 0x60);
    local_390 = local_390 & 0xffffffffffff0000;
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        local_370,(basic_string *)&local_390);
    if ((local_390 & 1) != 0) {
      operator_delete(local_380);
    }
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_378,"\t dim = ",8);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                        *(ulong *)(this + 0x298));
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,"\t-> ",4);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,lVar2 + lVar7);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5," voxels",7);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet((id *)&local_390);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)&local_390);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    plVar6 = *(long **)(param_5 + 0x28);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    puVar12 = (undefined *)((ulong)&local_390 | 1);
    if ((local_390 & 1) != 0) {
      puVar12 = local_380;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6,puVar12);
    if ((local_390 & 1) != 0) {
      operator_delete(local_380);
    }
    lVar7 = *(long *)(this + 0x2a8);
  }
  *(undefined8 *)(this + 0x2a0) = *(undefined8 *)(lVar7 + 0x38);
  *(undefined8 *)(this + 600) = 0x4024000000000000;
  if (((byte)this[0x2b8] & 1) == 0) {
    *(undefined8 *)(this + 0x268) = 0x4059000000000000;
    *(undefined8 *)(this + 0x260) = 0x4059000000000000;
    plVar6 = *(long **)(param_5 + 0x20);
    if (plVar6 != (long *)0x0) {
      pVVar8 = *(VHACD **)(this + 0x238);
      pVVar10 = *(VHACD **)(this + 0x250);
      if (((byte)this[0x228] & 1) == 0) {
        pVVar8 = this + 0x229;
      }
      if (((byte)this[0x240] & 1) == 0) {
        pVVar10 = this + 0x241;
      }
      (**(code **)(*plVar6 + 0x10))
                (*(undefined8 *)(this + 600),0x4059000000000000,0x4059000000000000,plVar6,pVVar8,
                 pVVar10);
    }
  }
  clock_gettime(0,(timespec *)(this + 0x288));
  if (*(long *)(param_5 + 0x28) != 0) {
    local_270[0]._0_2_ = 0;
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        local_370,local_270);
    if (((ushort)local_270[0] & 1) != 0) {
      operator_delete(local_260);
    }
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_378,"\t time ",7);
    dVar13 = (double)NEON_fmadd((double)(*(long *)(this + 0x290) - *(long *)(this + 0x280)),
                                0x3e112e0be826d695,
                                (double)(*(long *)(this + 0x288) - *(long *)(this + 0x278)));
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                        (dVar13 * 1000.0) / 1000.0);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,"s",1);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet((id *)local_270);
    (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale((locale *)local_270);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put((char)pbVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush();
    plVar6 = *(long **)(param_5 + 0x28);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pvVar1 = (void *)((ulong)local_270 | 1);
    if (((ushort)local_270[0] & 1) != 0) {
      pvVar1 = local_260;
    }
    (**(code **)(*plVar6 + 0x10))(plVar6,pvVar1);
    if (((ushort)local_270[0] & 1) != 0) {
      operator_delete(local_260);
    }
  }
  local_308[0] = &PTR__basic_ostringstream_00fd8ef8;
  local_378 = &PTR__basic_ostringstream_00fd8ed0;
  local_370[0] = &PTR__basic_stringbuf_00fd8fa0;
  if ((local_330 & 1) != 0) {
    operator_delete(local_320);
  }
  std::__ndk1::basic_streambuf<char,std::__ndk1::char_traits<char>>::~basic_streambuf
            ((basic_streambuf<char,std::__ndk1::char_traits<char>> *)local_370);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::~basic_ostream
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_378);
  std::__ndk1::basic_ios<char,std::__ndk1::char_traits<char>>::~basic_ios
            ((basic_ios<char,std::__ndk1::char_traits<char>> *)local_308);
LAB_00eaaf0c:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


