#pragma once

#include "Application.h"
#include "ofEvents.h"
#include "ofLog.h"
#include "ofGraphics.h"
#include "SelNextTexCoordCmd.h"
#include "DeselectTexCoordCmd.h"

namespace ofx {
namespace piMapper {

class TextureMappingState : public ApplicationBaseState {

	public:
		static TextureMappingState * instance();
		void draw(Application * app);
		void onKeyPressed(Application * app, ofKeyEventArgs & args);

	private:
		static TextureMappingState * _instance;

};

} // namespace piMapper
} // namespace ofx
