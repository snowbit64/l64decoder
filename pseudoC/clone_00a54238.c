// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00a54238
// Size: 356 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LightSource::clone() */

LightSource * LightSource::clone(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  TransformGroup *in_x0;
  LightSource *this;
  undefined8 uVar4;
  undefined8 uVar5;
  
  this = (LightSource *)operator_new(0x248);
                    /* try { // try from 00a54290 to 00a542b3 has its CatchHandler @ 00a5439c */
  LightSource(this,*(char **)(in_x0 + 8),*(LIGHT_TYPE *)(in_x0 + 0x16c),(Vector3 *)(in_x0 + 0x170),
              true,true,true,*(float *)(in_x0 + 0x1ac),*(float *)(in_x0 + 0x1b0),
              *(float *)(in_x0 + 0x1b4),*(uint *)(in_x0 + 0x1b8),true,*(float *)(in_x0 + 0x194),
              *(float *)(in_x0 + 0x19c),*(float *)(in_x0 + 0x198),*(float *)(in_x0 + 0x1bc),
              *(float *)(in_x0 + 0x1c0),*(uint *)(in_x0 + 0x1c4),*(float *)(in_x0 + 0x1cc),false);
  *(undefined4 *)(this + 0x20c) = *(undefined4 *)(in_x0 + 0x20c);
  TransformGroup::copyTransformGroupPropertiesFrom((TransformGroup *)this,in_x0);
  if (in_x0[0x1c8] == (TransformGroup)0x0) {
    this[0x1c8] = (LightSource)0x0;
    uVar3 = *(int *)(this + 0x1c4) - 1;
    if ((*(int *)(this + 0x1c4) != 1) &&
       (*(undefined4 *)(this + 0x1d0) = *(undefined4 *)(in_x0 + 0x1d0), uVar3 != 1)) {
      *(undefined4 *)(this + 0x1d4) = *(undefined4 *)(in_x0 + 0x1d4);
      if ((2 < uVar3) &&
         (*(undefined4 *)(this + 0x1d8) = *(undefined4 *)(in_x0 + 0x1d8), uVar3 != 3)) {
        *(undefined4 *)(this + 0x1dc) = *(undefined4 *)(in_x0 + 0x1dc);
        if ((4 < uVar3) &&
           (*(undefined4 *)(this + 0x1e0) = *(undefined4 *)(in_x0 + 0x1e0), uVar3 != 5)) {
          *(undefined4 *)(this + 0x1e4) = *(undefined4 *)(in_x0 + 0x1e4);
          if ((6 < uVar3) &&
             (*(undefined4 *)(this + 0x1e8) = *(undefined4 *)(in_x0 + 0x1e8), uVar3 != 7)) {
            *(undefined4 *)(this + 0x1ec) = *(undefined4 *)(in_x0 + 0x1ec);
          }
        }
      }
    }
  }
  if (in_x0[0x1f0] != (TransformGroup)0x0) {
    uVar4 = *(undefined8 *)(in_x0 + 0x200);
    uVar5 = *(undefined8 *)(in_x0 + 500);
    this[0x1f0] = (LightSource)0x1;
    uVar1 = *(undefined4 *)(in_x0 + 0x1fc);
    *(undefined8 *)(this + 0x200) = uVar4;
    uVar2 = *(undefined4 *)(in_x0 + 0x208);
    *(undefined8 *)(this + 500) = uVar5;
    *(undefined4 *)(this + 0x1fc) = uVar1;
    *(undefined4 *)(this + 0x208) = uVar2;
  }
  return this;
}


