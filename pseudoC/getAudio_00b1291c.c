// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAudio
// Entry Point: 00b1291c
// Size: 524 bytes
// Signature: undefined __thiscall getAudio(SoftAudioVoice * this, float * param_1, uint param_2, uint param_3)


/* SoftAudioVoice::getAudio(float*, unsigned int, unsigned int) */

uint __thiscall
SoftAudioVoice::getAudio(SoftAudioVoice *this,float *param_1,uint param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  
  if ((DAT_021157e0 & 1) == 0) {
    DAT_021157e0 = 1;
  }
  uVar7 = 0;
  if (this[0x208] == (SoftAudioVoice)0x0) {
    uVar9 = (ulong)param_2;
    if (param_2 != 0) {
      uVar7 = 0;
      plVar1 = (long *)(this + 0x210);
      uVar9 = (ulong)param_2;
      uVar5 = *(uint *)(this + 0x228);
      do {
        uVar6 = *(uint *)(this + 0x21c);
        if (uVar5 == uVar6) {
          if (*plVar1 != 0) {
            (**(code **)(**(long **)(this + 0x1f0) + 0x28))(*(long **)(this + 0x1f0),plVar1);
            *plVar1 = 0;
            *(undefined8 *)(this + 0x218) = 0;
            *(undefined4 *)(this + 0x220) = 0;
          }
          *(undefined4 *)(this + 0x228) = 0;
          uVar4 = (**(code **)(**(long **)(this + 0x1f0) + 0x20))
                            (*(long **)(this + 0x1f0),plVar1,this + 0xc,*(undefined4 *)(this + 0x10)
                            );
          if ((uVar4 & 1) == 0) {
            *plVar1 = 0;
            *(undefined8 *)(this + 0x218) = 0;
            *(undefined4 *)(this + 0x220) = 0;
            this[0x208] = (SoftAudioVoice)0x1;
            if (*(int *)(this + 0x4c) == 0) {
              return param_2;
            }
            goto LAB_00b12aac;
          }
          uVar6 = *(uint *)(this + 0x21c);
          if (uVar6 == 0) goto LAB_00b12aa4;
          uVar5 = *(uint *)(this + 0x228);
        }
        uVar8 = (uint)uVar9;
        uVar2 = *(uint *)(this + 0x218);
        if (uVar8 <= *(uint *)(this + 0x218)) {
          uVar2 = uVar8;
        }
        uVar3 = uVar6 - uVar5;
        if (uVar2 <= uVar6 - uVar5) {
          uVar3 = uVar2;
        }
        if (*(int *)(this + 0x4c) != 0) {
          memcpy(param_1 + uVar7,(void *)(*(long *)(this + 0x210) + (ulong)uVar5 * 4),
                 (ulong)uVar3 << 2);
          if (1 < *(uint *)(this + 0x4c)) {
            uVar9 = 1;
            uVar4 = (ulong)param_3;
            do {
              memcpy(param_1 + uVar7 + uVar4,
                     (void *)(*(long *)(this + 0x210) +
                              (ulong)(uint)(*(int *)(this + 0x218) * (int)uVar9) * 4 +
                             (ulong)*(uint *)(this + 0x228) * 4),(ulong)uVar3 << 2);
              uVar9 = uVar9 + 1;
              uVar4 = (ulong)((int)uVar4 + param_3);
            } while (uVar9 < *(uint *)(this + 0x4c));
          }
          uVar5 = *(uint *)(this + 0x228);
        }
        uVar5 = uVar5 + uVar3;
        uVar9 = (ulong)(uVar8 - uVar3);
        uVar7 = uVar3 + uVar7;
        *(uint *)(this + 0x228) = uVar5;
      } while ((this[0x208] == (SoftAudioVoice)0x0) && (uVar8 - uVar3 != 0));
    }
  }
  else {
    uVar9 = (ulong)param_2;
  }
  if ((int)uVar9 != 0) {
LAB_00b12aa4:
    if (*(int *)(this + 0x4c) != 0) {
LAB_00b12aac:
      uVar5 = 0;
      uVar4 = 0;
      do {
        memset(param_1 + (ulong)uVar7 + (ulong)uVar5,0,uVar9 << 2);
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 + param_3;
      } while (uVar4 < *(uint *)(this + 0x4c));
    }
  }
  return param_2;
}


