// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Compress3
// Entry Point: 00de8e60
// Size: 168 bytes
// Signature: undefined __thiscall Compress3(SingleColourFit * this, void * param_1)


/* squish::SingleColourFit::Compress3(void*) */

void __thiscall squish::SingleColourFit::Compress3(SingleColourFit *this,void *param_1)

{
  long lVar1;
  uchar auStack_60 [16];
  SingleColourLookup *local_50;
  undefined *puStack_48;
  undefined *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puStack_48 = &DAT_0054a811;
  local_50 = (SingleColourLookup *)&DAT_0054a211;
  local_40 = &DAT_0054a211;
  ComputeEndPoints(this,&local_50);
  if (*(int *)(this + 0x34) < *(int *)(this + 0x38)) {
    ColourSet::RemapIndices(*(ColourSet **)(this + 8),(uchar *)(this + 0x30),auStack_60);
    WriteColourBlock3((Vec3 *)(this + 0x18),(Vec3 *)(this + 0x24),auStack_60,param_1);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(this + 0x34);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


