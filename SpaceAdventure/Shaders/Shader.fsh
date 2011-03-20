//
//  Shader.fsh
//  SpaceAdventure
//
//  Created by Bassem Farah on 20/03/11.
//  Copyright 2011 Bludger. All rights reserved.
//

varying lowp vec4 colorVarying;

void main()
{
    gl_FragColor = colorVarying;
}
