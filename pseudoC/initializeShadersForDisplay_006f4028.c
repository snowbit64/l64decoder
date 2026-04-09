// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initializeShadersForDisplay
// Entry Point: 006f4028
// Size: 1668 bytes
// Signature: undefined __thiscall initializeShadersForDisplay(OverlayRenderManager * this, IRenderDevice * param_1, IDisplay * param_2, COLORSPACE param_3)


/* WARNING: Type propagation algorithm not settling */
/* OverlayRenderManager::initializeShadersForDisplay(IRenderDevice*, IDisplay*,
   IDisplay::COLORSPACE) */

void __thiscall
OverlayRenderManager::initializeShadersForDisplay
          (OverlayRenderManager *this,IRenderDevice *param_1,IDisplay *param_2,COLORSPACE param_3)

{
  basic_string *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  basic_string *pbVar10;
  ulong uVar11;
  undefined8 uVar12;
  uint uVar13;
  byte *pbVar14;
  byte local_138 [16];
  void *local_128;
  byte local_120 [16];
  char *local_110;
  basic_string *local_108;
  basic_string *local_100;
  basic_string *local_f8;
  ShaderStructLayout local_f0 [16];
  void *local_e0;
  undefined2 local_d8;
  byte *local_d0;
  byte *local_c8;
  basic_string local_b8;
  basic_string local_b0 [4];
  void *local_a0;
  undefined2 local_98;
  byte *local_90;
  byte *local_88;
  basic_string local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  iVar8 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
  if (iVar8 == 0) {
    uVar12 = 1;
  }
  else {
    uVar13 = 0;
    do {
      uVar9 = (**(code **)(*(long *)param_2 + 0x50))(param_2,uVar13);
      lVar6 = (ulong)uVar9 * 0x100 + (ulong)param_3 * 0x800;
      if (*(long *)(this + lVar6 + 0x10) == 0) {
        ShaderStructLayout::ShaderStructLayout(local_f0,"DeviceParameters",0);
                    /* try { // try from 006f4118 to 006f41d3 has its CatchHandler @ 006f4780 */
        ShaderStructLayout::addField(local_f0,"g_sceneClipViewport",2,0,4,false,0);
        ShaderStructLayout::addField(local_f0,"g_sceneMaxBrightnessNits",2,0,0,false,0);
        ShaderStructLayout::addField(local_f0,"g_sceneMaxFullFrameBrightnessNits",2,0,0,false,0);
        ShaderStructLayout::addField(local_f0,"g_sceneNits",2,0,0,false,0);
        ShaderStructLayout::addField(local_f0,"g_overlayNits",2,0,0,false,0);
        ShaderStructLayout::endDefinition();
                    /* try { // try from 006f41d4 to 006f41df has its CatchHandler @ 006f46fc */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(local_b0);
        local_98 = local_d8;
                    /* try { // try from 006f41e8 to 006f41f3 has its CatchHandler @ 006f46e0 */
        std::__ndk1::
        vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>::vector
                  ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                    *)&local_90,(vector *)&local_d0);
        local_100 = (basic_string *)0x0;
        local_f8 = (basic_string *)0x0;
        local_108 = (basic_string *)0x0;
        local_78 = local_b8;
                    /* try { // try from 006f4204 to 006f420b has its CatchHandler @ 006f46d8 */
        pbVar10 = (basic_string *)operator_new(0x40);
        pbVar1 = pbVar10 + 0x10;
        local_108 = pbVar10;
        local_100 = pbVar10;
        local_f8 = pbVar1;
                    /* try { // try from 006f421c to 006f4223 has its CatchHandler @ 006f475c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar10);
        *(undefined2 *)(pbVar10 + 6) = local_98;
                    /* try { // try from 006f4230 to 006f4237 has its CatchHandler @ 006f4744 */
        std::__ndk1::
        vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>::vector
                  ((vector<ShaderStructLayout::Field,std::__ndk1::allocator<ShaderStructLayout::Field>>
                    *)(pbVar10 + 8),(vector *)&local_90);
        pbVar2 = local_90;
        pbVar10[0xe] = local_78;
        local_100 = pbVar1;
        pbVar14 = local_88;
        if (local_90 != (byte *)0x0) {
          while (pbVar7 = pbVar14, pbVar7 != pbVar2) {
            pbVar14 = pbVar7 + -0x20;
            if ((*pbVar14 & 1) != 0) {
              operator_delete(*(void **)(pbVar7 + -0x10));
            }
          }
          local_88 = pbVar2;
          operator_delete(local_90);
        }
        if (((byte)local_b0[0]._0_1_ & 1) != 0) {
          operator_delete(local_a0);
        }
                    /* try { // try from 006f42a4 to 006f42b7 has its CatchHandler @ 006f4734 */
        ShaderStructLayout::ShaderStructLayout((ShaderStructLayout *)local_b0,"PreRotationParams",0)
        ;
                    /* try { // try from 006f42b8 to 006f42e3 has its CatchHandler @ 006f4778 */
        ShaderStructLayout::addField
                  ((ShaderStructLayout *)local_b0,"g_preRotationAngle",2,0,0,false,0);
        ShaderStructLayout::endDefinition();
        pbVar1 = local_100;
        if (local_100 == local_f8) {
                    /* try { // try from 006f438c to 006f4397 has its CatchHandler @ 006f4778 */
          std::__ndk1::vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
          __push_back_slow_path<ShaderStructLayout_const&>
                    ((vector<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)
                     &local_108,(ShaderStructLayout *)local_b0);
        }
        else {
                    /* try { // try from 006f42f0 to 006f42ff has its CatchHandler @ 006f46d0 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string(local_100);
          *(undefined8 *)(pbVar1 + 8) = 0;
          *(undefined2 *)(pbVar1 + 6) = local_98;
          *(undefined8 *)(pbVar1 + 10) = 0;
          *(undefined8 *)(pbVar1 + 0xc) = 0;
          uVar11 = (long)local_88 - (long)local_90;
          if (uVar11 != 0) {
            if ((long)uVar11 < 0) {
                    /* try { // try from 006f4658 to 006f465f has its CatchHandler @ 006f46c8 */
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__vector_base_common<true>::__throw_length_error();
            }
                    /* try { // try from 006f4324 to 006f432b has its CatchHandler @ 006f46c4 */
            pbVar10 = (basic_string *)operator_new(uVar11);
            pbVar14 = local_88;
            *(basic_string **)(pbVar1 + 8) = pbVar10;
            *(basic_string **)(pbVar1 + 10) = pbVar10;
            *(basic_string **)(pbVar1 + 0xc) = pbVar10 + ((long)uVar11 >> 5) * 8;
            for (pbVar2 = local_90; pbVar2 != pbVar14; pbVar2 = pbVar2 + 0x20) {
                    /* try { // try from 006f434c to 006f4357 has its CatchHandler @ 006f4788 */
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string(pbVar10);
              *(undefined8 *)(pbVar10 + 6) = *(undefined8 *)(pbVar2 + 0x18);
              pbVar10 = pbVar10 + 8;
            }
            *(basic_string **)(pbVar1 + 10) = pbVar10;
          }
          local_100 = pbVar1 + 0x10;
          pbVar1[0xe] = local_78;
        }
                    /* try { // try from 006f4398 to 006f43ab has its CatchHandler @ 006f473c */
        ColorspaceUtil::getColorspaceMacros(uVar9,"");
                    /* try { // try from 006f43b0 to 006f43c3 has its CatchHandler @ 006f471c */
        ColorspaceUtil::getColorspaceMacros(param_3,"SCENE_");
        pvVar5 = (void *)((ulong)local_138 | 1);
        if ((local_138[0] & 1) != 0) {
          pvVar5 = local_128;
        }
                    /* try { // try from 006f43e0 to 006f43e7 has its CatchHandler @ 006f4704 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)local_120,(ulong)pvVar5);
        if ((local_138[0] & 1) != 0) {
          operator_delete(local_128);
        }
        pcVar3 = (char *)((ulong)local_120 | 1);
        if ((local_120[0] & 1) != 0) {
          pcVar3 = local_110;
        }
                    /* try { // try from 006f4424 to 006f4433 has its CatchHandler @ 006f46f8 */
        uVar11 = AdhocShader::load((AdhocShader *)(this + lVar6 + 8),param_1,"compositeToDevice.cg",
                                   pcVar3,uVar9 | param_3 << 3,(ShaderStructLayout *)local_108,
                                   (uint)((ulong)((long)local_100 - (long)local_108) >> 6));
        if ((uVar11 & 1) == 0) {
          if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager),
             iVar8 != 0)) {
                    /* try { // try from 006f4670 to 006f467b has its CatchHandler @ 006f46ac */
            LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
            __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                         &PTR_LOOP_00fd8de0);
            __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
          }
                    /* try { // try from 006f4534 to 006f4547 has its CatchHandler @ 006f46c0 */
          LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                             "Error: Cannot load compositeToDevice.cg\n");
          if ((local_120[0] & 1) != 0) {
            operator_delete(local_110);
          }
          pbVar2 = local_90;
          pbVar14 = local_88;
          if (local_90 != (byte *)0x0) {
            while (pbVar7 = pbVar14, pbVar7 != pbVar2) {
              pbVar14 = pbVar7 + -0x20;
              if ((*pbVar14 & 1) != 0) {
                operator_delete(*(void **)(pbVar7 + -0x10));
              }
            }
            local_88 = pbVar2;
            operator_delete(local_90);
          }
          if (((byte)local_b0[0]._0_1_ & 1) != 0) {
            operator_delete(local_a0);
          }
          std::__ndk1::__vector_base<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>
          ::~__vector_base((__vector_base<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>
                            *)&local_108);
          pbVar2 = local_d0;
          pbVar14 = local_c8;
          if (local_d0 != (byte *)0x0) {
            while (pbVar7 = pbVar14, pbVar7 != pbVar2) {
              pbVar14 = pbVar7 + -0x20;
              if ((*pbVar14 & 1) != 0) {
                operator_delete(*(void **)(pbVar7 + -0x10));
              }
            }
            local_c8 = pbVar2;
            operator_delete(local_d0);
          }
          if (((byte)local_f0[0] & 1) != 0) {
            operator_delete(local_e0);
          }
          uVar12 = 0;
          goto LAB_006f4628;
        }
        if ((local_120[0] & 1) != 0) {
          operator_delete(local_110);
        }
        pbVar2 = local_90;
        pbVar14 = local_88;
        if (local_90 != (byte *)0x0) {
          while (pbVar7 = pbVar14, pbVar7 != pbVar2) {
            pbVar14 = pbVar7 + -0x20;
            if ((*pbVar14 & 1) != 0) {
              operator_delete(*(void **)(pbVar7 + -0x10));
            }
          }
          local_88 = pbVar2;
          operator_delete(local_90);
        }
        if (((byte)local_b0[0]._0_1_ & 1) != 0) {
          operator_delete(local_a0);
        }
        std::__ndk1::__vector_base<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
        ~__vector_base((__vector_base<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>
                        *)&local_108);
        pbVar2 = local_d0;
        pbVar14 = local_c8;
        if (local_d0 != (byte *)0x0) {
          while (pbVar7 = pbVar14, pbVar7 != pbVar2) {
            pbVar14 = pbVar7 + -0x20;
            if ((*pbVar14 & 1) != 0) {
              operator_delete(*(void **)(pbVar7 + -0x10));
            }
          }
          local_c8 = pbVar2;
          operator_delete(local_d0);
        }
        if (((byte)local_f0[0] & 1) != 0) {
          operator_delete(local_e0);
        }
      }
      uVar13 = uVar13 + 1;
      uVar9 = (**(code **)(*(long *)param_2 + 0x38))(param_2);
    } while (uVar13 < uVar9);
    uVar12 = 1;
  }
LAB_006f4628:
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar12);
  }
  return;
}


