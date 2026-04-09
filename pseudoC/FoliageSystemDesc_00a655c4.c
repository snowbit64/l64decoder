// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FoliageSystemDesc
// Entry Point: 00a655c4
// Size: 20 bytes
// Signature: undefined __thiscall FoliageSystemDesc(FoliageSystemDesc * this, float param_1, uint param_2, uint param_3)


/* FoliageSystemDesc::FoliageSystemDesc(float, unsigned int, unsigned int) */

void __thiscall
FoliageSystemDesc::FoliageSystemDesc
          (FoliageSystemDesc *this,float param_1,uint param_2,uint param_3)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(float *)this = param_1;
  *(uint *)(this + 4) = param_2;
  *(uint *)(this + 8) = param_3;
  return;
}


