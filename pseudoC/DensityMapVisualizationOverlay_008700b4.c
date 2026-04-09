// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DensityMapVisualizationOverlay
// Entry Point: 008700b4
// Size: 220 bytes
// Signature: undefined __thiscall DensityMapVisualizationOverlay(DensityMapVisualizationOverlay * this, char * param_1, uint param_2, uint param_3, bool param_4)


/* DensityMapVisualizationOverlay::DensityMapVisualizationOverlay(char const*, unsigned int,
   unsigned int, bool) */

void __thiscall
DensityMapVisualizationOverlay::DensityMapVisualizationOverlay
          (DensityMapVisualizationOverlay *this,char *param_1,uint param_2,uint param_3,bool param_4
          )

{
  void *pvVar1;
  
  Overlay::Overlay((Overlay *)this,param_1,0.0,0.0,1.0,1.0,0.0,0.0,1.0,1.0);
  *(uint *)(this + 0x293d0) = param_2;
  *(undefined ***)this = &PTR__DensityMapVisualizationOverlay_00fdc118;
  *(undefined ***)(this + 0x78) = &PTR__DensityMapVisualizationOverlay_00fdc160;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x20000000000000;
  *(uint *)(this + 0x293d4) = param_3;
  *(undefined8 *)(this + 0x293d8) = 0;
                    /* try { // try from 00870144 to 00870173 has its CatchHandler @ 00870190 */
  pvVar1 = operator_new__((ulong)(param_3 * param_2) << 2);
  *(undefined4 *)(this + 0x4a0) = 0;
  *(void **)(this + 0x293c8) = pvVar1;
  *(undefined4 *)(this + 0x8cc8) = 0;
  *(undefined4 *)(this + 0x29390) = 0;
  *(undefined8 *)(this + 0x29398) = 0;
  reset();
  *(undefined4 *)(this + 0x293e0) = 0;
  *(undefined8 *)(this + 0x293c0) = 0x4034000000000000;
  return;
}


