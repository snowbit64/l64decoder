// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initOverlay
// Entry Point: 006dad28
// Size: 348 bytes
// Signature: undefined initOverlay(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EngineApplication::initOverlay() */

void EngineApplication::initOverlay(void)

{
  long in_x0;
  Texture *pTVar1;
  ImageOverlay *pIVar2;
  float fVar3;
  
  pTVar1 = (Texture *)TextureUtil::loadDefaultImageOverlayTexture("shared/splash.png",false);
  *(undefined8 *)(in_x0 + 600) = 0;
  if (pTVar1 != (Texture *)0x0) {
    EngineManager::getInstance();
    fVar3 = (float)EngineManager::getScreenAspectRatio();
    pIVar2 = (ImageOverlay *)operator_new(0x90);
                    /* try { // try from 006dad74 to 006dada7 has its CatchHandler @ 006dae8c */
    ImageOverlay::ImageOverlay
              (pIVar2,"Splash",pTVar1,(ISamplerObject *)0x0,0.0,0.0,1.0,fVar3,0.0,0.0,1.0,1.0);
    *(ImageOverlay **)(in_x0 + 600) = pIVar2;
  }
  *(undefined8 *)(in_x0 + 0x288) = 0x3e8844433ceb2406;
  *(undefined8 *)(in_x0 + 0x280) = 0x3ee666663ebc0000;
  pTVar1 = (Texture *)TextureUtil::loadDefaultImageOverlayTexture("shared/loadingBarBG.png",false);
  if (pTVar1 != (Texture *)0x0) {
    pIVar2 = (ImageOverlay *)operator_new(0x90);
                    /* try { // try from 006dadec to 006dae0f has its CatchHandler @ 006dae88 */
    ImageOverlay::ImageOverlay
              (pIVar2,"loadingBarBG",pTVar1,(ISamplerObject *)0x0,*(float *)(in_x0 + 0x280),
               *(float *)(in_x0 + 0x284),*(float *)(in_x0 + 0x28c),*(float *)(in_x0 + 0x288),0.0,0.0
               ,1.0,1.0);
    *(ImageOverlay **)(in_x0 + 0x270) = pIVar2;
  }
  pTVar1 = (Texture *)TextureUtil::loadDefaultImageOverlayTexture("shared/loadingBarFG.png",false);
  if (pTVar1 != (Texture *)0x0) {
    pIVar2 = (ImageOverlay *)operator_new(0x90);
                    /* try { // try from 006dae44 to 006dae6b has its CatchHandler @ 006dae84 */
    ImageOverlay::ImageOverlay
              (pIVar2,"loadingBarFG",pTVar1,(ISamplerObject *)0x0,*(float *)(in_x0 + 0x280),
               *(float *)(in_x0 + 0x284),0.0,*(float *)(in_x0 + 0x288),0.0,0.0,1.0,1.0);
    *(ImageOverlay **)(in_x0 + 0x278) = pIVar2;
  }
  return;
}


