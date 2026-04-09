// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setElementFilenameAt
// Entry Point: 00a4d00c
// Size: 852 bytes
// Signature: undefined __thiscall setElementFilenameAt(AudioSourceSample * this, uint param_1, char * param_2)


/* AudioSourceSample::setElementFilenameAt(unsigned int, char const*) */

void __thiscall
AudioSourceSample::setElementFilenameAt(AudioSourceSample *this,uint param_1,char *param_2)

{
  uint *puVar1;
  long lVar2;
  size_t __n;
  ulong uVar3;
  IAudioDevice *pIVar4;
  undefined8 uVar5;
  basic_string *pbVar6;
  long *plVar7;
  void *__dest;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  undefined8 local_98;
  size_t local_90;
  void *local_88;
  undefined2 local_80;
  undefined6 uStack_7e;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  pbVar6 = (basic_string *)(ulong)param_1;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar1 = (uint *)((long)(this + 0xb0) + ((long)pbVar6 * 0xe + 1) * 4);
  if (1 < *(uint *)(this + 0xb0)) {
    puVar1 = (uint *)(*(long *)(this + 0xf0) + (long)pbVar6 * 0x38);
  }
  __n = strlen(param_2);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_98 | 1);
    local_98 = CONCAT71(local_98._1_7_,(char)((int)__n << 1));
    if (__n == 0) goto LAB_00a4d0d4;
  }
  else {
    uVar3 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar3);
    local_98 = uVar3 | 1;
    local_90 = __n;
    local_88 = __dest;
  }
  memcpy(__dest,param_2,__n);
  pbVar6 = (basic_string *)param_2;
LAB_00a4d0d4:
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 00a4d0d8 to 00a4d0e3 has its CatchHandler @ 00a4d360 */
  PathUtil::makeUnifiedPath((PathUtil *)&local_98,pbVar6);
  if ((*(byte *)(puVar1 + 2) & 1) != 0) {
    operator_delete(*(void **)(puVar1 + 6));
  }
  uVar5 = CONCAT62(uStack_7e,local_80);
  local_80 = 0;
  *(undefined8 *)(puVar1 + 6) = local_70;
  *(undefined8 *)(puVar1 + 4) = uStack_78;
  *(undefined8 *)(puVar1 + 2) = uVar5;
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  if (this[0x30] != (AudioSourceSample)0x0) {
    Element::destroy();
    uVar3 = loadElementAt(this,param_1,1);
    if ((uVar3 & 1) != 0) {
      AudioDeviceManager::getInstance();
      pIVar4 = (IAudioDevice *)AudioDeviceManager::getCurrentAudioDevice();
      activateElementAt(this,param_1,pIVar4);
      Sample::getVolume();
      (**(code **)(*(long *)this + 0x98))(this);
      uVar8 = Sample::getMinDistance();
      uVar9 = Sample::getMaxDistance();
      (**(code **)(*(long *)this + 0xb8))(uVar8,uVar9,this);
      uVar5 = Sample::getPosition();
      (**(code **)(*(long *)this + 0xa0))(this,uVar5);
      uVar5 = Sample::getVelocity();
      (**(code **)(*(long *)this + 0xa8))(this,uVar5);
      Sample::getPitch();
      (**(code **)(*(long *)this + 200))(this);
      (**(code **)(*(long *)this + 0xd0))(this,*(undefined4 *)(this + 0x68));
    }
    if (((*(uint *)(this + 0xac) == param_1) && (-1 < *(int *)(this + 0x88))) &&
       ((*(uint *)(this + 0x78) & 0x19) == 0x11)) {
      fVar13 = *(float *)(this + 0x7c);
      fVar12 = *(float *)(this + 0x80);
      *(undefined4 *)(this + 0x88) = *(undefined4 *)(this + 0x84);
      fVar10 = fVar12;
      if (fVar13 <= fVar12) {
        fVar10 = fVar13;
      }
      if (fVar12 <= fVar13) {
        fVar12 = fVar13;
      }
      fVar12 = (float)MathUtil::getRandomMinMax(fVar10,fVar12);
      *(float *)(this + 0x98) = fVar12 * 1000.0;
      uVar8 = Sample::getVolume();
      if (this[0x30] != (AudioSourceSample)0x0) {
        puVar1 = (uint *)((long)(this + 0xb0) + ((ulong)*(uint *)(this + 0xac) * 0xe + 1) * 4);
        if (1 < *(uint *)(this + 0xb0)) {
          puVar1 = (uint *)(*(long *)(this + 0xf0) + (ulong)*(uint *)(this + 0xac) * 0x38);
        }
        if (*(long *)(puVar1 + 0xc) != 0) {
          if (*(long *)(puVar1 + 10) != 0) {
            LoopSynthesisGenerator::setStart
                      ((LoopSynthesisGenerator *)(*(long *)(puVar1 + 10) + 0x10),0.0);
          }
          uVar9 = *(undefined4 *)(this + 0x88);
          if ((((byte)this[0x78] >> 3 & 1) == 0) &&
             ((0.0 < *(float *)(this + 0x80) || *(int *)(this + 0xb0) != 0) &&
              (0.0 < *(float *)(this + 0x80) || *(int *)(this + 0xb0) != 1))) {
            uVar9 = 1;
          }
          plVar7 = *(long **)(puVar1 + 0xc);
          uVar11 = Sample::getPitch();
          (**(code **)(*plVar7 + 0x10))(uVar8,uVar11,0,0,plVar7,uVar9,0);
        }
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


