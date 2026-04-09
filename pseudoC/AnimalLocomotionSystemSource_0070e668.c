// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnimalLocomotionSystemSource
// Entry Point: 0070e668
// Size: 132 bytes
// Signature: undefined __thiscall AnimalLocomotionSystemSource(AnimalLocomotionSystemSource * this)


/* AnimalLocomotionSystemSource::AnimalLocomotionSystemSource() */

void __thiscall
AnimalLocomotionSystemSource::AnimalLocomotionSystemSource(AnimalLocomotionSystemSource *this)

{
  undefined4 uVar1;
  
  AnimalAnimationSystemSource::AnimalAnimationSystemSource
            ((AnimalAnimationSystemSource *)(this + 0x38));
  *(undefined8 *)(this + 0x3d68) = 0;
  *(undefined8 *)(this + 0x3d60) = 0;
  *(undefined8 *)(this + 0x3d58) = 0;
  *(undefined8 *)this = 0x3f80000040200000;
                    /* try { // try from 0070e6a8 to 0070e6af has its CatchHandler @ 0070e6ec */
  uVar1 = MathUtil::degreeToRadian(15.0);
  *(undefined4 *)(this + 8) = uVar1;
  *(undefined4 *)(this + 0x34) = 0x43c80000;
  *(undefined8 *)(this + 0x2c) = 0x4000000040000000;
  *(undefined8 *)(this + 0x14) = 0x3f80000040400000;
  *(undefined8 *)(this + 0xc) = 0x40a0000040200000;
  *(undefined8 *)(this + 0x24) = 0x40a0000040800000;
  *(undefined8 *)(this + 0x1c) = 0x4100000040a00000;
  return;
}


