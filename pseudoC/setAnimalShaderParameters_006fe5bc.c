// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAnimalShaderParameters
// Entry Point: 006fe5bc
// Size: 124 bytes
// Signature: undefined __thiscall setAnimalShaderParameters(AnimalHusbandry * this, uint param_1, char * param_2, float * param_3)


/* AnimalHusbandry::setAnimalShaderParameters(unsigned int, char const*, float const*) */

void __thiscall
AnimalHusbandry::setAnimalShaderParameters
          (AnimalHusbandry *this,uint param_1,char *param_2,float *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = *(uint *)(this + 0x5c);
  if (uVar2 == 0) {
    return;
  }
  if (*(uint *)(*(long *)(this + 0x1f568) + 0x1a0) == param_1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      if ((ulong)uVar2 - 1 == uVar3) {
        return;
      }
      lVar1 = uVar3 * 8;
      uVar3 = uVar3 + 1;
    } while (*(uint *)(*(long *)(this + lVar1 + 0x1f570) + 0x1a0) != param_1);
    if (uVar2 <= uVar3) {
      return;
    }
  }
  Animal::setCustomShaderParameters(*(Animal **)(this + uVar3 * 8 + 0x1f568),param_2,param_3);
  return;
}


