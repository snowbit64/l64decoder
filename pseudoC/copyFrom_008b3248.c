// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: copyFrom
// Entry Point: 008b3248
// Size: 316 bytes
// Signature: undefined __thiscall copyFrom(StaticSample * this, StaticSample * param_1)


/* StaticSample::copyFrom(StaticSample const&) */

void __thiscall StaticSample::copyFrom(StaticSample *this,StaticSample *param_1)

{
  StaticSample SVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  lVar2 = (**(code **)(*(long *)this + 0x70))();
  lVar3 = (**(code **)(*(long *)param_1 + 0x70))(param_1);
  SVar1 = this[0x30];
  if (lVar2 != lVar3 && SVar1 != (StaticSample)0x0) {
    Sample::unload();
    SVar1 = this[0x30];
  }
  if ((SVar1 == (StaticSample)0x0) && (param_1[0x30] != (StaticSample)0x0)) {
    pcVar4 = (char *)(**(code **)(*(long *)param_1 + 0x70))(param_1);
    uVar5 = Sample::load((Sample *)this,pcVar4,(bool)param_1[0x31],1);
    if ((uVar5 & 1) != 0) {
      fVar7 = (float)Sample::getVolume();
      Sample::setVolume((Sample *)this,fVar7);
      pfVar6 = (float *)Sample::getDirection();
      Sample::setDirection((Sample *)this,pfVar6);
      pfVar6 = (float *)Sample::getPosition();
      Sample::setPosition((Sample *)this,pfVar6);
      pfVar6 = (float *)Sample::getVelocity();
      Sample::setVelocity((Sample *)this,pfVar6);
      fVar7 = (float)Sample::getMinDistance();
      fVar8 = (float)Sample::getMaxDistance();
      Sample::setMinMaxDistance((Sample *)this,fVar7,fVar8);
      fVar7 = (float)Sample::getPitch();
      Sample::setPitch((Sample *)this,fVar7);
      Sample::setGroup((Sample *)this,*(uint *)(param_1 + 0x68));
      return;
    }
  }
  return;
}


