// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 0070f928
// Size: 1156 bytes
// Signature: undefined __thiscall init(AnimalSoundSystem * this, AnimalSoundSource * param_1, TransformGroup * param_2, uint param_3, bool param_4)


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* AnimalSoundSystem::init(AnimalSoundSource*, TransformGroup*, unsigned int, bool) */

void __thiscall
AnimalSoundSystem::init
          (AnimalSoundSystem *this,AnimalSoundSource *param_1,TransformGroup *param_2,uint param_3,
          bool param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long *this_00;
  undefined4 *puVar7;
  void *__dest;
  void *pvVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined4 uVar14;
  byte *pbVar15;
  long **pplVar16;
  ulong uVar17;
  size_t sVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined4 local_d8 [2];
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0 [8];
  undefined8 uStack_c8;
  void *local_c0;
  undefined4 *puStack_b8;
  undefined4 *local_b0;
  undefined4 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  *(TransformGroup **)(this + 0x48) = param_2;
  this[0x51] = (AnimalSoundSystem)param_4;
  lVar10 = *(long *)param_1;
  if (*(long *)(param_1 + 8) != lVar10) {
    uVar12 = 0;
    do {
      puStack_b8 = (undefined4 *)0x0;
      local_c0 = (void *)0x0;
      local_a8 = (undefined4 *)0x0;
      local_b0 = (undefined4 *)0x0;
      uStack_c8 = 0;
      local_d0[0] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)
                    0x0;
      local_d8[0] = 0xffffffff;
                    /* try { // try from 0070fa00 to 0070fa03 has its CatchHandler @ 0070fdec */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=(local_d0,(basic_string *)(lVar10 + uVar12 * 0x58));
      lVar9 = *(long *)param_1 + uVar12 * 0x58;
      local_a0 = *(undefined8 *)(lVar9 + 0x18);
      fVar22 = *(float *)(lVar9 + 0x20);
      fVar23 = *(float *)(lVar9 + 0x24);
      uVar21 = *(undefined8 *)(lVar9 + 0x30);
      uVar20 = *(undefined8 *)(lVar9 + 0x28);
      uStack_90._4_4_ = (undefined4)((ulong)uVar21 >> 0x20);
      uVar6 = uStack_90._4_4_;
      uStack_98._4_4_ = (undefined4)((ulong)uVar20 >> 0x20);
      uVar5 = uStack_98._4_4_;
      uStack_88 = *(undefined4 *)(lVar9 + 0x38);
      lVar10 = *(long *)(lVar9 + 0x40);
      uStack_98 = uVar20;
      uStack_90 = uVar21;
      if (*(long *)(lVar9 + 0x48) != lVar10) {
        uVar19 = 0;
        do {
          pbVar13 = (byte *)(lVar10 + uVar19 * 0x18);
          bVar3 = *pbVar13;
          pbVar15 = *(byte **)(pbVar13 + 0x10);
                    /* try { // try from 0070fa9c to 0070faa3 has its CatchHandler @ 0070fe0c */
          this_00 = (long *)operator_new(0x298);
          if ((bVar3 & 1) == 0) {
            pbVar15 = pbVar13 + 1;
          }
                    /* try { // try from 0070fab0 to 0070fad3 has its CatchHandler @ 0070fdfc */
          AudioSource::AudioSource
                    ((AudioSource *)this_00,"animalSound",(char *)pbVar15,fVar22,fVar23,1.0,1,
                     param_3,1);
          if (*(AudioSource *)(this_00 + 0x31) == (AudioSource)0x0) {
            (**(code **)(*this_00 + 8))(this_00);
          }
          else {
                    /* try { // try from 0070fae0 to 0070faff has its CatchHandler @ 0070fe0c */
            AudioSourceSample::setAutoPlay((AudioSourceSample *)(this_00 + 0x2b),false);
            (**(code **)(*(long *)param_2 + 0x18))(param_2,this_00,0xffffffff);
            puVar2 = puStack_b8;
            pplVar16 = *(long ***)(this + 8);
            uVar14 = (undefined4)((ulong)((long)pplVar16 - *(long *)this) >> 3);
            if (local_b0 < local_a8) {
              *local_b0 = uVar14;
              local_b0 = local_b0 + 1;
            }
            else {
              sVar18 = (long)local_b0 - (long)puStack_b8;
              uVar11 = ((long)sVar18 >> 2) + 1;
              if (uVar11 >> 0x3e != 0) {
                    /* try { // try from 0070fd78 to 0070fd7f has its CatchHandler @ 0070fdf8 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              uVar17 = (long)local_a8 - (long)puStack_b8 >> 1;
              if (uVar11 <= uVar17) {
                uVar11 = uVar17;
              }
              if (0x7ffffffffffffffb < (ulong)((long)local_a8 - (long)puStack_b8)) {
                uVar11 = 0x3fffffffffffffff;
              }
              if (uVar11 == 0) {
                puVar7 = (undefined4 *)0x0;
              }
              else {
                if (uVar11 >> 0x3e != 0) {
                    /* try { // try from 0070fd88 to 0070fd93 has its CatchHandler @ 0070fdf8 */
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 0070fb6c to 0070fb6f has its CatchHandler @ 0070fdf0 */
                puVar7 = (undefined4 *)operator_new(uVar11 << 2);
              }
              puVar1 = puVar7 + ((long)sVar18 >> 2);
              *puVar1 = uVar14;
              if (0 < (long)sVar18) {
                memcpy(puVar7,puVar2,sVar18);
              }
              local_a8 = puVar7 + uVar11;
              puStack_b8 = puVar7;
              local_b0 = puVar1 + 1;
              if (puVar2 != (undefined4 *)0x0) {
                operator_delete(puVar2);
                pplVar16 = *(long ***)(this + 8);
              }
            }
            if (pplVar16 == *(long ***)(this + 0x10)) {
              pvVar8 = *(void **)this;
              uVar17 = (long)pplVar16 - (long)pvVar8;
              uVar11 = ((long)uVar17 >> 3) + 1;
              if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 0070fd80 to 0070fd87 has its CatchHandler @ 0070fdf4 */
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_length_error();
              }
              if (uVar11 <= (ulong)((long)uVar17 >> 2)) {
                uVar11 = (long)uVar17 >> 2;
              }
              if (0x7ffffffffffffff7 < uVar17) {
                uVar11 = 0x1fffffffffffffff;
              }
              if (uVar11 == 0) {
                __dest = (void *)0x0;
              }
              else {
                if (uVar11 >> 0x3d != 0) {
                    /* try { // try from 0070fd94 to 0070fd9f has its CatchHandler @ 0070fdf4 */
                    /* WARNING: Subroutine does not return */
                  FUN_006d1f18(
                              "allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size"
                              );
                }
                    /* try { // try from 0070fc18 to 0070fc1b has its CatchHandler @ 0070fe0c */
                __dest = operator_new(uVar11 << 3);
              }
              pplVar16 = (long **)((long)__dest + ((long)uVar17 >> 3) * 8);
              *pplVar16 = this_00;
              if (0 < (long)uVar17) {
                memcpy(__dest,pvVar8,uVar17);
              }
              *(void **)this = __dest;
              *(long ***)(this + 8) = pplVar16 + 1;
              *(void **)(this + 0x10) = (void *)((long)__dest + uVar11 * 8);
              if (pvVar8 != (void *)0x0) {
                operator_delete(pvVar8);
              }
            }
            else {
              *pplVar16 = this_00;
              *(long ***)(this + 8) = pplVar16 + 1;
            }
          }
          uVar19 = (ulong)((int)uVar19 + 1);
          lVar9 = *(long *)param_1 + uVar12 * 0x58;
          lVar10 = *(long *)(lVar9 + 0x40);
          uVar11 = (*(long *)(lVar9 + 0x48) - lVar10 >> 3) * -0x5555555555555555;
        } while (uVar19 <= uVar11 && uVar11 - uVar19 != 0);
      }
      puVar2 = *(undefined4 **)(this + 0x20);
      if (puVar2 == *(undefined4 **)(this + 0x28)) {
                    /* try { // try from 0070fd28 to 0070fd33 has its CatchHandler @ 0070fdac */
        std::__ndk1::
        vector<AnimalSoundSystem::SoundGroup,std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>>
        ::__push_back_slow_path<AnimalSoundSystem::SoundGroup_const&>
                  ((vector<AnimalSoundSystem::SoundGroup,std::__ndk1::allocator<AnimalSoundSystem::SoundGroup>>
                    *)(this + 0x18),(SoundGroup *)local_d8);
        puVar7 = puStack_b8;
        puVar2 = local_b0;
      }
      else {
        *puVar2 = local_d8[0];
                    /* try { // try from 0070fc7c to 0070fc87 has its CatchHandler @ 0070fde0 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(puVar2 + 2);
        *(undefined8 *)(puVar2 + 8) = 0;
        *(undefined8 *)(puVar2 + 10) = 0;
        *(undefined8 *)(puVar2 + 0xc) = 0;
        uVar19 = (long)local_b0 - (long)puStack_b8;
        puVar7 = puStack_b8;
        if (uVar19 != 0) {
          if ((long)uVar19 < 0) {
                    /* try { // try from 0070fda0 to 0070fda7 has its CatchHandler @ 0070fdb4 */
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__vector_base_common<true>::__throw_length_error();
          }
                    /* try { // try from 0070fca4 to 0070fcab has its CatchHandler @ 0070fdb0 */
          pvVar8 = operator_new(uVar19);
          puVar7 = puStack_b8;
          *(void **)(puVar2 + 8) = pvVar8;
          *(void **)(puVar2 + 10) = pvVar8;
          *(void **)(puVar2 + 0xc) = (void *)((long)pvVar8 + ((long)uVar19 >> 2) * 4);
          sVar18 = (long)local_b0 - (long)puStack_b8;
          if (0 < (long)sVar18) {
            memcpy(pvVar8,puStack_b8,sVar18);
            pvVar8 = (void *)((long)pvVar8 + sVar18);
          }
          *(void **)(puVar2 + 10) = pvVar8;
        }
        *(ulong *)(puVar2 + 0x13) = CONCAT44(uStack_88,uVar6);
        *(ulong *)(puVar2 + 0x11) = CONCAT84(uStack_90,uVar5);
        *(ulong *)(puVar2 + 0x10) = CONCAT48(uVar5,uStack_98);
        *(undefined8 *)(puVar2 + 0xe) = local_a0;
        *(undefined4 **)(this + 0x20) = puVar2 + 0x16;
        puVar2 = local_b0;
      }
      local_b0 = puVar7;
      if (local_b0 != (undefined4 *)0x0) {
        operator_delete(local_b0);
        puVar2 = local_b0;
      }
      local_b0 = puVar2;
      if (((byte)local_d0[0] & 1) != 0) {
        operator_delete(local_c0);
      }
      uVar12 = (ulong)((int)uVar12 + 1);
      lVar10 = *(long *)param_1;
      uVar19 = (*(long *)(param_1 + 8) - lVar10 >> 3) * 0x2e8ba2e8ba2e8ba3;
    } while (uVar12 <= uVar19 && uVar19 - uVar12 != 0);
  }
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


