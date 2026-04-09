// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addElement
// Entry Point: 00a4bbc8
// Size: 840 bytes
// Signature: undefined __cdecl addElement(char * param_1, float param_2)


/* AudioSourceSample::addElement(char const*, float) */

void AudioSourceSample::addElement(char *param_1,float param_2)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  IAudioDevice *pIVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  long *plVar11;
  void **ppvVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 local_90 [2];
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  puVar10 = (uint *)(param_1 + 0xb0);
  uVar8 = *puVar10;
  if (uVar8 == 1) {
    uVar5 = (ulong)((byte)param_1[0xbc] >> 1);
    if ((param_1[0xbc] & 1U) != 0) {
      uVar5 = *(ulong *)(param_1 + 0xc4);
    }
    if (uVar5 == 0) {
      uVar5 = 0;
      ppvVar12 = (void **)(param_1 + 0xcc);
      uVar9 = 1;
      do {
        if ((*(byte *)(ppvVar12 + -2) & 1) != 0) {
          operator_delete(*ppvVar12);
          uVar9 = (ulong)*puVar10;
        }
        uVar5 = uVar5 + 1;
        ppvVar12 = ppvVar12 + 7;
      } while (uVar5 < uVar9);
      uVar8 = 0;
      *puVar10 = 0;
    }
    else {
      uVar8 = 1;
    }
  }
  local_90[0] = 0x3f800000;
  uStack_80 = 0;
  local_88 = 0;
  uStack_70 = 0;
  local_78 = (void *)0x0;
  uStack_60 = 0;
  local_68 = 0;
                    /* try { // try from 00a4bc88 to 00a4bc97 has its CatchHandler @ 00a4bf10 */
  SmallVector<AudioSourceSample::Element,1u>::resize
            ((SmallVector<AudioSourceSample::Element,1u> *)puVar10,uVar8 + 1,(Element)local_90,true)
  ;
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  uVar8 = *(uint *)(param_1 + 0xb0);
  uVar3 = uVar8 - 1;
  pfVar1 = (float *)((long)(param_1 + 0xb0) + ((ulong)uVar3 * 0xe + 1) * 4);
  if (1 < uVar8) {
    pfVar1 = (float *)(*(long *)(param_1 + 0xf0) + (ulong)uVar3 * 0x38);
  }
  *pfVar1 = param_2;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(pfVar1 + 2));
  PathUtil::makeUnifiedPathInPlace((basic_string *)(pfVar1 + 2));
  if (param_1[0x30] != '\0') {
    iVar2 = *(int *)(param_1 + 0xb0);
    uVar5 = loadElementAt((AudioSourceSample *)param_1,iVar2 - 1U,1);
    if ((uVar5 & 1) != 0) {
      AudioDeviceManager::getInstance();
      pIVar6 = (IAudioDevice *)AudioDeviceManager::getCurrentAudioDevice();
      activateElementAt((AudioSourceSample *)param_1,iVar2 - 1U,pIVar6);
      Sample::getVolume();
      (**(code **)(*(long *)param_1 + 0x98))(param_1);
      uVar13 = Sample::getMinDistance();
      uVar14 = Sample::getMaxDistance();
      (**(code **)(*(long *)param_1 + 0xb8))(uVar13,uVar14,param_1);
      uVar7 = Sample::getPosition();
      (**(code **)(*(long *)param_1 + 0xa0))(param_1,uVar7);
      uVar7 = Sample::getVelocity();
      (**(code **)(*(long *)param_1 + 0xa8))(param_1,uVar7);
      Sample::getPitch();
      (**(code **)(*(long *)param_1 + 200))(param_1);
      (**(code **)(*(long *)param_1 + 0xd0))(param_1,*(undefined4 *)(param_1 + 0x68));
    }
    if ((*(uint *)(param_1 + 0x78) & 0x19) == 0x11) {
      puVar10 = (uint *)((long)(param_1 + 0xb0) + ((ulong)*(uint *)(param_1 + 0xac) * 0xe + 1) * 4);
      if (1 < *(uint *)(param_1 + 0xb0)) {
        puVar10 = (uint *)(*(long *)(param_1 + 0xf0) + (ulong)*(uint *)(param_1 + 0xac) * 0x38);
      }
      if (*(long **)(puVar10 + 0xc) != (long *)0x0) {
        (**(code **)(**(long **)(puVar10 + 0xc) + 0x40))(0,0);
      }
      if ((-1 < *(int *)(param_1 + 0x88)) && (uVar13 = Sample::getVolume(), param_1[0x30] != '\0'))
      {
        puVar10 = (uint *)((long)(param_1 + 0xb0) + ((ulong)*(uint *)(param_1 + 0xac) * 0xe + 1) * 4
                          );
        if (1 < *(uint *)(param_1 + 0xb0)) {
          puVar10 = (uint *)(*(long *)(param_1 + 0xf0) + (ulong)*(uint *)(param_1 + 0xac) * 0x38);
        }
        if (*(long *)(puVar10 + 0xc) != 0) {
          if (*(long *)(puVar10 + 10) != 0) {
            LoopSynthesisGenerator::setStart
                      ((LoopSynthesisGenerator *)(*(long *)(puVar10 + 10) + 0x10),0.0);
          }
          uVar14 = *(undefined4 *)(param_1 + 0x88);
          if ((((byte)param_1[0x78] >> 3 & 1) == 0) &&
             ((0.0 < *(float *)(param_1 + 0x80) || *(int *)(param_1 + 0xb0) != 0) &&
              (0.0 < *(float *)(param_1 + 0x80) || *(int *)(param_1 + 0xb0) != 1))) {
            uVar14 = 1;
          }
          plVar11 = *(long **)(puVar10 + 0xc);
          uVar15 = Sample::getPitch();
          (**(code **)(*plVar11 + 0x10))(uVar13,uVar15,0,0,plVar11,uVar14,0);
        }
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


