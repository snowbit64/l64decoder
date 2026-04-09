// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DowngradePipeline
// Entry Point: 009648a8
// Size: 192 bytes
// Signature: undefined __thiscall DowngradePipeline(DowngradePipeline * this, CommonPipelineData * param_1)


/* TextureStreamingManager::DowngradePipeline::DowngradePipeline(TextureStreamingManager::CommonPipelineData&)
    */

void __thiscall
TextureStreamingManager::DowngradePipeline::DowngradePipeline
          (DowngradePipeline *this,CommonPipelineData *param_1)

{
  *(CommonPipelineData **)this = param_1;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
                    /* try { // try from 009648dc to 009648e7 has its CatchHandler @ 009649a8 */
  Mutex::Mutex((Mutex *)(this + 0x38),true);
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
                    /* try { // try from 009648fc to 00964907 has its CatchHandler @ 00964988 */
  Mutex::Mutex((Mutex *)(this + 0xc0),true);
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
                    /* try { // try from 00964938 to 0096493f has its CatchHandler @ 00964968 */
  Mutex::Mutex((Mutex *)(this + 0x148),true);
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1a4) = 0;
  return;
}


