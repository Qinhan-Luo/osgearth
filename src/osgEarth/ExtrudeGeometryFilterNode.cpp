#include "ExtrudeGeometryFilterNode"
#include <osgDB/ObjectWrapper>

namespace osgEarth
{
    namespace Util
    {
        ExtrudeGeometryFilterNode::ExtrudeGeometryFilterNode()
        {

        }

        ExtrudeGeometryFilterNode::ExtrudeGeometryFilterNode(osg::Group* extrusionGroup, const osg::Matrixd& xform)
            : _extrusionGroup(extrusionGroup)
            , _xform(xform)
        {

        }
        ExtrudeGeometryFilterNode::ExtrudeGeometryFilterNode(const ExtrudeGeometryFilterNode& rhs, const osg::CopyOp& copyop)
        {
            _extrusionGroup = rhs._extrusionGroup;
            _xform = rhs._xform;
        }


        REGISTER_OBJECT_WRAPPER(ExtrudeGeometryFilterNode,
            new ExtrudeGeometryFilterNode,
            osgEarth::Util::ExtrudeGeometryFilterNode,
            "osg::Object osgEarth::Util::ExtrudeGeometryFilterNode")
        {
            ADD_OBJECT_SERIALIZER(_extrusionGroup, osg::Group, NULL);

            ADD_MATRIX_SERIALIZER(_xform, osg::Matrixd::identity());
        }

    }
}