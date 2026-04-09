// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EnvMapBlender
// Entry Point: 00a0e098
// Size: 428 bytes
// Signature: undefined __thiscall EnvMapBlender(EnvMapBlender * this, IRenderDevice * param_1, bool param_2)


/* EnvMapBlender::EnvMapBlender(IRenderDevice*, bool) */

void __thiscall
EnvMapBlender::EnvMapBlender(EnvMapBlender *this,IRenderDevice *param_1,bool param_2)

{
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0x388) = 0;
  *(undefined8 *)(this + 0x398) = 0;
  *(undefined8 *)(this + 0x390) = 0;
  *(undefined8 *)(this + 0x3b0) = 0;
  *(undefined8 *)(this + 0x3a8) = 0;
  *(undefined8 *)(this + 0x3c0) = 0;
  *(undefined8 *)(this + 0x3b8) = 0;
  *(undefined8 *)(this + 0x3d0) = 0;
  *(undefined8 *)(this + 0x3c8) = 0;
  *(undefined8 *)(this + 0x3e0) = 0;
  *(undefined8 *)(this + 0x3d8) = 0;
  *(undefined8 *)(this + 0x3f0) = 0;
  *(undefined8 *)(this + 1000) = 0;
  *(undefined8 *)(this + 0x400) = 0;
  *(undefined8 *)(this + 0x3f8) = 0;
                    /* try { // try from 00a0e108 to 00a0e10f has its CatchHandler @ 00a0e24c */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x578));
                    /* try { // try from 00a0e114 to 00a0e14b has its CatchHandler @ 00a0e258 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x678));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x778));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x878));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x978));
  AdhocShader::AdhocShader((AdhocShader *)(this + 0xa78));
                    /* try { // try from 00a0e150 to 00a0e15b has its CatchHandler @ 00a0e244 */
  Semaphore::Semaphore((Semaphore *)(this + 0xb80),0);
  *(IRenderDevice **)(this + 0x548) = param_1;
  *(undefined8 *)(this + 0x418) = 0;
  *(undefined4 *)(this + 0x408) = 0;
                    /* try { // try from 00a0e16c to 00a0e1df has its CatchHandler @ 00a0e274 */
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(this + 0x438));
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(this + 0x448));
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(this + 0x458));
  *(undefined8 *)(this + 0x420) = 0;
  *(undefined4 *)(this + 0x40c) = 0;
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(this + 0x468));
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(this + 0x478));
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(this + 0x488));
  *(undefined8 *)(this + 0x428) = 0;
  *(undefined4 *)(this + 0x410) = 0;
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(this + 0x498));
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(this + 0x4a8));
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(this + 0x4b8));
  *(undefined8 *)(this + 0x430) = 0;
  *(undefined4 *)(this + 0x414) = 0;
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(this + 0x4c8));
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(this + 0x4d8));
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(this + 0x4e8));
                    /* try { // try from 00a0e1e4 to 00a0e1f7 has its CatchHandler @ 00a0e254 */
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(this + 0x500));
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(this + 0x510));
  SphericalHarmonicsUtil::zeroiseSHB2((SHB2 *)(this + 0x520));
  *(undefined8 *)(this + 0x4f8) = 0;
  this[0x530] = (EnvMapBlender)0x0;
  this[0x541] = (EnvMapBlender)0x0;
  *(undefined4 *)(this + 0x538) = 0xffffffff;
  *(undefined4 *)(this + 0x3a0) = 0;
  *(undefined8 *)(this + 0xb78) = 0;
  *(undefined8 *)(this + 0x558) = 0;
  *(undefined8 *)(this + 0x550) = 0;
  *(undefined8 *)(this + 0x568) = 0;
  *(undefined8 *)(this + 0x560) = 0;
  *(undefined8 *)(this + 0x570) = 0;
  this[0x540] = (EnvMapBlender)param_2;
  return;
}


